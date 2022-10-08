//
// Created by franc on 08/10/2022.
//

#include "Activity.h"



// CONSTRUCTORS
Activity::Activity(const QString& des, const QTime& init, const QTime& fin)
{
    this->setDescription(des);
    this->setInitTime(init);
    this->setFinTime(fin);
}

// DESTRUCTOR
Activity::~Activity(){}

// SETTER
void Activity::setDescription(const QString& des){  this->descriprion=des;      }
void Activity::setInitTime(const QTime& init){      this->initialTime=init;     }
void Activity::setFinTime(const QTime& fin){        this->finalTime=fin;        }

// GETTER
const QString& Activity::getDescription(){  return this->descriprion;   }
const QTime& Activity::getInitTime(){       return this->initialTime;   }
const QTime& Activity::getFinTime(){        return this->finalTime;     }