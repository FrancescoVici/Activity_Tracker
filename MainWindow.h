//
// Created by francesco on 19/10/22.
//

#ifndef ACTIVITY_TRACKER_MAINWINDOW_H
#define ACTIVITY_TRACKER_MAINWINDOW_H

#include <cstdlib>
#include <QApplication>
#include <QString>
#include <QDate>
#include <QTime>
#include <QWidget>
#include <QTableWidget>
#include <QStandardItemModel>
#include <QPushButton>
#include <QComboBox>
#include <QTableWidgetItem>

#include "Activity.h"
#include "Register.h"
#include "UserInputWindow.h"

class MainWindow: public QWidget{
    Q_OBJECT
public:
    // CONSTRUCTORS
    explicit MainWindow(QWidget *parent= nullptr);
    // DESTRUCTOR
    virtual ~MainWindow();
    // SETTER
    void addRegister(Register* reg);
    void delRegister(Register* reg);
    Register* getCurrentReg();
    // GETTER
    std::vector<Register*>::iterator getRegistersHead();
    std::vector<Register*>::iterator getRegistersTail();


signals:
    void activityChanged(bool changed=false);

public slots:
    void openNewInputWindow(bool click=0);
    void pushNewAct(Activity* newAct);
    void updateRegistersBox(bool changed);
    void updateActivitiesTable(bool changed);

private:
    QPushButton* addActButton;
    QPushButton* removeActButton;

    QComboBox* registers;
    std::vector<Register*> registersList;

    QTableWidget* activityTable;

};


#endif //ACTIVITY_TRACKER_MAINWINDOW_H
