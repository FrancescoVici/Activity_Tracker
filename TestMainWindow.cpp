//
// Created by francesco on 06/12/22.
//

#include "TestMainWindow.h"

void TestMainWindow::testConstructor()
{
    auto m=new MainWindow();
    QVERIFY(m->parent()== nullptr);
}

void TestMainWindow::testAddRegister()
{
    const QString n=*(new QString("LUNEDÌ"));
    const QDate d=*(new QDate(01,01,2001));
    auto r=*(new Register(n, d));

    auto m=new MainWindow();
    m->addRegister(r);

    QVERIFY(m->getRegister(n)->getName()==n);
    QVERIFY(m->getRegister(n)->getDate()==d);
}

