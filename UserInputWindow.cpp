//
// Created by francesco on 19/10/22.
//

#include "UserInputWindow.h"


// CONSTRUCTORS
UserInputWindow::UserInputWindow(QWidget *parent)
        :parent(parent)
{
    this->setFixedSize(400, 250);

    this->initT=new QLineEdit(this);
    this->initT->setGeometry(75, 10, 250, 50);
    this->initT->setPlaceholderText("Set Initial Time (format: HH:MM:SS)");

    this->finT=new QLineEdit(this);
    this->finT->setGeometry(75, 70, 250, 50);
    this->finT->setPlaceholderText("Set Final Time (format: HH:MM:SS)");

    this->desc=new QLineEdit(this);
    this->desc->setGeometry(10, 130, 380, 50);
    this->desc->setPlaceholderText("Insert Description");

    this->confirm=new QPushButton(this);
    this->confirm->setGeometry(125, 190, 150, 50);
    this->confirm->setText("Confirm");

    connect(this->confirm, SIGNAL(clicked(bool)),this, SLOT(emitNewUserActivity(bool)));
    connect (this->confirm, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(this, SIGNAL(sendNewActivity(const Activity&)), this->parent, SLOT(pushNewAct(const Activity&)));
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

        QTime initTime= QTime::fromString(init, "HH:mm:ss");
        QTime finTime= QTime::fromString(fin, "HH:mm:ss");

        auto newAct= new Activity(text, initTime, finTime);

        emit sendNewActivity(*newAct);
    }
}
