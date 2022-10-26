//
// Created by franc on 08/10/2022.
//

#ifndef ACTIVITY_TRACKER_REGISTER_H
#define ACTIVITY_TRACKER_REGISTER_H

#include <cstdlib>
#include <iterator>
#include <vector>
#include <QApplication>
#include <QString>
#include <QDate>

#include "Activity.h"



class Register {
public:
    // CONSTRUCTORS
    Register(const QString& name, const QDate& date);
    // DESTRUCTOR
    ~Register();

    // SETTER
    void setName(const QString& name);
    void setDate(const QDate& date);
    void addActivity(Activity* toAdd);
    void removeActivity(const QString& desc);

    // GETTER
    const QString& getName();
    const QDate& getDate();
    std::vector<Activity*>::iterator getDailyActHead();
    std::vector<Activity*>::iterator getDailyActTail();
    Activity* getActivity(int pos);
    int getActivityLenght();

private:
    QString name;
    QDate date;
    std::vector<Activity*> dailyActivities;

};


#endif //ACTIVITY_TRACKER_REGISTER_H
