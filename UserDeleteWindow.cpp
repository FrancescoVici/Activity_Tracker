//
// Created by francesco on 26/10/22.
//

#include "UserDeleteWindow.h"

// CONSTRUCTOR
UserDeleteWindow::UserDeleteWindow(const QList<QString>& activities, QWidget *parent)
        :parent(parent)
{
    this->setFixedSize(400, 250);


    this->err=new QLabel(this);
    this->err->setGeometry(10, 0, 380, 30);
    this->err->setText("Choose the Activity to delete");

    this->activityComboBox=new QComboBox(this);
    this->activityComboBox->setGeometry(75, 40, 250, 50);

    for(int i=0; i<activities.size();i++){
        this->activityComboBox->addItem(activities.value(i));
    }

    this->confirm=new QPushButton(this);
    this->confirm->setGeometry(125, 190, 150, 50);
    this->confirm->setText("Confirm");

    connect(this->confirm,SIGNAL(clicked(bool)),this,SLOT(atClickEmitName(bool)));
    connect(this,SIGNAL(sendDeleteActivityName(const QString &)),this->parent,SLOT(receiveActivityToDelete(const QString &)));
    connect(this->confirm,SIGNAL(clicked(bool)),this,SLOT(close()));
}

// DESTRUCTOR
UserDeleteWindow::~UserDeleteWindow(){}

//SLOTS
void UserDeleteWindow::atClickEmitName(bool click)
{
    if(click==0){
        emit sendDeleteActivityName(this->activityComboBox->currentText());
    }
}
