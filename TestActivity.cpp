//
// Created by francesco on 05/12/22.
//

#include "TestActivity.h"

void TestActivity::testConstructor()
{
    const QString d=*(new QString("Descrizione"));
    const QTime i=*(new QTime(12,00));
    const QTime e=*(new QTime(13, 00));

    auto t=new Activity(d, i, e);

    QVERIFY(t->getDescription()==d);
    QVERIFY(t->getInitTime()==i);
    QVERIFY(t->getEndTime()==e);
}


// QTEST_MAIN(TestActivity)