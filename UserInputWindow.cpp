//
// Created by francesco on 19/10/22.
//

#include "UserInputWindow.h"


// CONSTRUCTORS
UserInputWindow::UserInputWindow(QWidget *parent)
        :parent(parent)
{
    this->setFixedSize(400, 280);

    this->err=new QLabel(this);
    this->err->setGeometry(10, 0, 380, 30);
    this->err->setText("Insert the data for the new Activity");

    this->initT=new QLineEdit(this);
    this->initT->setGeometry(75, 40, 250, 50);
    this->initT->setPlaceholderText("Set Initial Time (format: HH:mm)");

    this->finT=new QLineEdit(this);
    this->finT->setGeometry(75, 100, 250, 50);
    this->finT->setPlaceholderText("Set Final Time (format: HH:mm)");

    this->desc=new QLineEdit(this);
    this->desc->setGeometry(10, 160, 380, 50);
    this->desc->setPlaceholderText("Insert Description");

    this->confirm=new QPushButton(this);
    this->confirm->setGeometry(125, 220, 150, 50);
    this->confirm->setText("Confirm");

    connect(this->confirm, SIGNAL(clicked(bool)),this, SLOT(emitNewUserActivity(bool)));
    connect (this->confirm, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(this, SIGNAL(sendNewActivity(Activity)), this->parent, SLOT(pushNewAct(Activity)));
}

UserInputWindow::UserInputWindow(QWidget *parent, const QString& error)
        :parent(parent)
{
    this->setFixedSize(400, 280);

    this->initT=new QLineEdit(this);
    this->initT->setGeometry(75, 40, 250, 50);
    this->initT->setPlaceholderText("Set Initial Time (format: HH:mm)");

    this->finT=new QLineEdit(this);
    this->finT->setGeometry(75, 100, 250, 50);
    this->finT->setPlaceholderText("Set Final Time (format: HH:mm)");

    this->desc=new QLineEdit(this);
    this->desc->setGeometry(10, 160, 380, 50);
    this->desc->setPlaceholderText("Insert Description");

    this->confirm=new QPushButton(this);
    this->confirm->setGeometry(125, 220, 150, 50);
    this->confirm->setText("Confirm");

    this->err=new QLabel(this);
    this->err->setGeometry(10, 0, 380, 30);
    this->setStyleSheet("QLabel { color : red; }");

    if(error=="tI>tE"){
        this->err->setText("The beginning time cannot be later than the final time");
        this->initT->setStyleSheet("border: 1px solid red");
        this->finT->setStyleSheet("border: 1px solid red");

    }else if(error=="unvalid-desc"){
        this->err->setText("The description cannot be empty");
        this->desc->setStyleSheet("border: 1px solid red");

    }else if(error=="unvalid-tI"){
        this->err->setText("The beginning time isn't valid");
        this->initT->setStyleSheet("border: 1px solid red");

    }else if(error=="unvalid-tF"){
        this->err->setText("The ending time isn't valid");
        this->finT->setStyleSheet("border: 1px solid red");
    }

    connect(this->confirm, SIGNAL(clicked(bool)),this, SLOT(emitNewUserActivity(bool)));
    connect (this->confirm, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(this, SIGNAL(sendNewActivity(Activity)), this->parent, SLOT(pushNewAct(Activity)));
}


// DESTRUCTOR
UserInputWindow::~UserInputWindow()
{
    delete(confirm);
    delete(desc);
    delete(initT);
    delete(finT);
}

// SETTER

// GETTER

//SLOTS
void UserInputWindow::emitNewUserActivity(bool click)
{
    if(click==0){
        QString text = desc->text();
        QString init = initT->text();
        QString fin = finT->text();
        QTime initTime= QTime::fromString(init, "HH:mm");
        QTime finTime= QTime::fromString(fin, "HH:mm");

        if(initTime.isValid() && finTime.isValid() && !text.isEmpty()){

            if(initTime<finTime){
                auto newAct= new Activity(text, initTime, finTime);
                emit sendNewActivity(*newAct);
            }
            else{
                auto *input=new UserInputWindow(this->parent, *(new QString("tI>tE")));
                input->show();
            }
        }
        else if(text.isEmpty()){
            auto *input=new UserInputWindow(this->parent, *(new QString("unvalid-desc")));
            input->show();
        }
        else if(!initTime.isValid()){
            auto *input=new UserInputWindow(this->parent, *(new QString("unvalid-tI")));
            input->show();
        }
        else if(!finTime.isValid()){
            auto *input=new UserInputWindow(this->parent, *(new QString("unvalid-tF")));
            input->show();
        }
    }
}
