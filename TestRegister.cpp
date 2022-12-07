//
// Created by francesco on 05/12/22.
//

#include "TestRegister.h"

void TestRegister::testConstructor()
{
    const QString n=*(new QString("LUNEDÌ"));
    const QDate d=*(new QDate(01,01,2001));

    auto t=new Register(n, d);

    QVERIFY(t->getName()==n);
    QVERIFY(t->getDate()==d);
}

void TestRegister::testAddActivity()
{
    Activity a=*(new Activity("description", *(new QTime(12, 00)), *(new QTime(13, 00))));
    auto t=new Register("LUNEDÌ", *(new QDate(01, 01, 01)));

    t->addActivity(a);

    QVERIFY(t->getActivity(0)==a);
}

void TestRegister::testRemoveActivity()
{
    auto d=*(new QString("Description"));
    Activity a=*(new Activity(d, *(new QTime(12, 00)), *(new QTime(13, 00))));
    auto t=new Register("LUNEDÌ", *(new QDate(01, 01, 01)));

    t->addActivity(a);
    t->removeActivity(d);

    QVERIFY(t->getActivityLength()==0);
}