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

    window->show();
    return app.exec();
}

