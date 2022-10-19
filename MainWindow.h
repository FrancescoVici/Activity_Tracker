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
#include <QTableView>
#include <QStandardItemModel>
#include <QPushButton>
#include <QComboBox>

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
    // GETTER
    std::vector<Register*>::iterator getRegistersHead();
    std::vector<Register*>::iterator getRegistersTail();
    Register* getRegisterAtPos(int pos);
    Register* getCurrentRegister();
    // OTHERS
    void updateActivityTable(Activity *added, bool addRow=0);

signals:
    void addedActivity(bool added=0);

public slots:
    void openNewInputWindow(bool click=0);
    void createNewActivity(QString desc, QTime initT, QTime finT);

private:
    QPushButton* addActButton;
    QPushButton* removeActButton;

    QComboBox* registers;
    std::vector<Register*> registersList;

    QTableView* activityTable;
};


#endif //ACTIVITY_TRACKER_MAINWINDOW_H
