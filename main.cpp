#include <iostream>

#include "Activity.h"
#include "Register.h"
#include "MainWindow.h"


int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    MainWindow* window=new MainWindow();

    Register* r1= new Register("LUNEDÌ", *(new QDate(2001, 1, 27)));
    window->addRegister(r1);
    Register* r2= new Register("MERTEDÌ", *(new QDate(2001, 1, 28)));
    window->addRegister(r2);
    Register* r3= new Register("MERCOLEDÌ", *(new QDate(2001, 1, 29)));
    window->addRegister(r3);
    Register* r4= new Register("GIOVEDÌ", *(new QDate(2001, 1, 30)));
    window->addRegister(r4);

    window->show();
    return app.exec();
}

