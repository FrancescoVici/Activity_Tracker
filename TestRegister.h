//
// Created by francesco on 05/12/22.
//

#ifndef ACTIVITY_TRACKER_TESTREGISTER_H
#define ACTIVITY_TRACKER_TESTREGISTER_H

#include <QTest>

#include "Register.h"


class TestRegister: public QObject {
    Q_OBJECT

private slots:
    void testConstructor();
    void testAddActivity();
    void testRemoveActivity();
    void testRemoveNonExistingActivity();
};


#endif //ACTIVITY_TRACKER_TESTREGISTER_H
