//
// Created by franc on 08/10/2022.
//

#include "Activity.h"



// CONSTRUCTORS
Activity::Activity(const QString& des, const QTime& init, const QTime& fin)
{
    this->setDescription(des);
    this->setInitTime(init);
    this->setEndTime(fin);
}



// DESTRUCTOR
// Activity::~Activity(){}

//OPERATORS
bool Activity::operator==(Activity b)
{
    if(this->description==b.description && this->initialTime==b.initialTime && this->finalTime==b.finalTime){
        return 1;
    }else{
        return 0;
    }
}


// SETTER
void Activity::setDescription(const QString& des){  this->description=des;      }

void Activity::setInitTime(const QTime& init){      this->initialTime=init;     }

void Activity::setEndTime(const QTime& fin){ this->finalTime=fin;        }



// GETTER
const QString& Activity::getDescription()const{   return this->description;   }

const QTime& Activity::getInitTime()const {       return this->initialTime;   }

const QTime& Activity::getEndTime()const{         return this->finalTime;     }

