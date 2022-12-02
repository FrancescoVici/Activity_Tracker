//
// Created by francesco on 19/10/22.
//

#ifndef ACTIVITY_TRACKER_USERINPUTWINDOW_H
#define ACTIVITY_TRACKER_USERINPUTWINDOW_H


#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QString>
#include <QTime>

#include "MainWindow.h"
#include "Register.h"
#include "Activity.h"


class UserInputWindow: public QWidget{
    Q_OBJECT
public:
    // CONSTRUCTORS
    explicit UserInputWindow(QWidget *parent = nullptr);
    // DESTRUCTOR
    ~UserInputWindow()override;

signals:
    void sendNewActivity(const Activity& newAct);

public slots:
    void emitNewUserActivity(bool click);

private:
    QWidget *parent;
    QPushButton *confirm;
    QLineEdit *desc;
    QLineEdit *initT;
    QLineEdit *finT;
};


#endif //ACTIVITY_TRACKER_USERINPUTWINDOW_H
