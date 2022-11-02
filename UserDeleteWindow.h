//
// Created by francesco on 26/10/22.
//

#ifndef ACTIVITY_TRACKER_USERDELETEWINDOW_H
#define ACTIVITY_TRACKER_USERDELETEWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QString>
#include <QComboBox>

#include "MainWindow.h"
#include "Register.h"
#include "Activity.h"

class UserDeleteWindow: public QWidget{
    Q_OBJECT
public:
    // CONSTRUCTORS
    explicit UserDeleteWindow(const QList<QString>& activities, QWidget *parent = nullptr);
    // DESTRUCTOR
    ~UserDeleteWindow()override;

signals:
    void sendDeleteActivityName(const QString& name);

public slots:
    void atClickEmitName(bool click);

private:
    QWidget *parent;
    QComboBox *activityComboBox;
    QPushButton *confirm;
};


#endif //ACTIVITY_TRACKER_USERDELETEWINDOW_H
