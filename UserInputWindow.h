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
    explicit UserInputWindow(Register *curr, QWidget *parent = nullptr);
    // DESTRUCTOR
    ~UserInputWindow()override;
    // SETTER
    // GETTER

signals:
    void sendUserActivityData(QString desc, QTime initT, QTime finT);

public slots:
    void emitUserActivityData(bool click);

private:
    QWidget *parent;
    QPushButton *confirm;
    QLineEdit *desc;
    QLineEdit *initT;
    QLineEdit *finT;
    Register *currentReg;
};


#endif //ACTIVITY_TRACKER_USERINPUTWINDOW_H
