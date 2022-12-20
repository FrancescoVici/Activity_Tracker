#include <iostream>

#include "Activity.h"
#include "Register.h"
#include "MainWindow.h"



#include <QTest>
#include "TestActivity.h"
#include "TestRegister.h"
#include "TestMainWindow.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    /*

    MainWindow* window=new MainWindow();

    Register* r1= new Register("LUNEDÌ", *(new QDate(2022, 10, 31)));
    window->addRegister(*r1);
    Register* r2= new Register("MARTEDÌ", *(new QDate(2022, 11, 1)));
    window->addRegister(*r2);
    Register* r3= new Register("MERCOLEDÌ", *(new QDate(2022, 11, 2)));
    window->addRegister(*r3);
    Register* r4= new Register("GIOVEDÌ", *(new QDate(2022, 11, 3)));
    window->addRegister(*r4);
    Register* r5= new Register("VENERDÌ", *(new QDate(2022, 11, 4)));
    window->addRegister(*r5);
    Register* r6= new Register("SABATO", *(new QDate(2022, 11, 5)));
    window->addRegister(*r6);
    Register* r7= new Register("DOMENICA", *(new QDate(2022, 11, 6)));
    window->addRegister(*r7);

    window->show();
    return app.exec();
  */
    int status = 0;
    auto ASSERT_TEST = [&status, argc, argv](QObject* obj) {
        status |= QTest::qExec(obj, argc, argv);
        delete obj;
    };

    ASSERT_TEST(new TestActivity());
    ASSERT_TEST(new TestRegister());
    ASSERT_TEST(new TestMainWindow());

    return status;

}

