//
// Created by francesco on 05/12/22.
//

#ifndef ACTIVITY_TRACKER_TESTACTIVITY_H
#define ACTIVITY_TRACKER_TESTACTIVITY_H

#include <QTest>

#include"Activity.h"


class TestActivity: public QObject {
    Q_OBJECT

private slots:
    void testConstructor();
};


#endif //ACTIVITY_TRACKER_TESTACTIVITY_H
