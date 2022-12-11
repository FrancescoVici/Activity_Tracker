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

// SETTER
void Register::setName(const QString& n){    this->name=n;    }

void Register::setDate(const QDate& date){      this->date=date;    }

void Register::addActivity(Activity& toAdd)
{
    this->dailyActivities.push_back(toAdd);
}

void Register::removeActivity(const QString& desc)
{
    bool found= false;
    auto del= this->getDailyActTail();
    auto itr=this->getDailyActHead();
    while(itr<this->getDailyActTail()) {
        if ((*itr).getDescription() == desc) {
            del = itr;
            found = true;
        }
        ++itr;
    }
    if(found==true)
        this->dailyActivities.erase(del);
}

// GETTER
const QString& Register::getName()const{     return this->name;  }

const QDate& Register::getDate()const{       return this->date;  }

std::vector<Activity>::iterator Register::getDailyActHead(){   return this->dailyActivities.begin();   }

std::vector<Activity>::iterator Register::getDailyActTail(){   return this->dailyActivities.end();     }

Activity Register::getActivity(int pos)const
{
    auto itr=dailyActivities.begin();
    for(int i=0; i<pos; i++)
        ++itr;
    return *itr;
}

int Register::getActivityLength()
{
    int i=0;
    for(auto itr=this->getDailyActHead(); itr<this->getDailyActTail(); itr++)
        ++i;
    return i;
}