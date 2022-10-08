#include <iostream>

#include "Activity.h"
#include "Register.h"


int main() {

    QString des="Allenamento Pallavolo";
    auto init=new QTime(17, 45);
    auto fin=new QTime(19, 00);

    auto act1=new Activity(des, *init, *fin);

    QString name="Lunedì";
    auto date=new QDate(2001, 1, 27);

    auto reg1=new Register(name, *date, act1);

    std::cout<<(*(reg1->getDailyActHead()))->getDescription().toStdString()<<std::endl;


}
