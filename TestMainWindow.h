//
// Created by francesco on 06/12/22.
//

#ifndef ACTIVITY_TRACKER_TESTMAINWINDOW_H
#define ACTIVITY_TRACKER_TESTMAINWINDOW_H

#include <QTest>
#include "MainWindow.h"

class TestMainWindow: public QObject{
    Q_OBJECT

private slots:
    void testConstructor();
    void testAddRegister();
};


#endif //ACTIVITY_TRACKER_TESTMAINWINDOW_H
