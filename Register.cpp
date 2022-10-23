//
// Created by franc on 08/10/2022.
//

#include "Register.h"

// CONSTRUCTORS
Register::Register(const QString& name, const QDate& date)
{
    this->setName(name);
    this->setDate(date);
}

// DESTRUCTOR
Register::~Register(){
    for(auto itr=this->getDailyActHead(); itr<= this->getDailyActTail(); itr++)
        delete(*itr);
}

// SETTER
void Register::setName(const QString& name){    this->name=name;    }

void Register::setDate(const QDate& date){      this->date=date;    }

void Register::addActivity(Activity* toAdd)
{
    auto itr=this->dailyActivities.begin();
    while((*itr)->getInitTime()!=toAdd->getInitTime())
    this->dailyActivities.push_back(toAdd);
}

void Register::removeActivity(int pos)
{
    auto itr=this->dailyActivities.begin();
    for(int i=0; i<pos; i++)
        ++itr;
    this->dailyActivities.erase(itr);
}

// GETTER
const QString& Register::getName(){     return this->name;  }

const QDate& Register::getDate(){       return this->date;  }

std::vector<Activity*>::iterator Register::getDailyActHead(){   return this->dailyActivities.begin();   }

std::vector<Activity*>::iterator Register::getDailyActTail(){   return this->dailyActivities.end();     }

Activity* Register::getActivity(int pos)
{
    auto itr=dailyActivities.begin();
    for(int i=0; i<pos; i++)
        ++itr;
    return *itr;
}

int Register::getActivityLenght()
{
    int i=0;
    for(auto itr=this->getDailyActHead(); itr<this->getDailyActTail(); itr++)
        ++i;
    return i;
}