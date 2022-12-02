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
    ~Register()=default;

    // SETTER
    void setName(const QString& name);
    void setDate(const QDate& date);
    void addActivity(Activity& toAdd);
    void removeActivity(const QString& desc);

    // GETTER
    const QString& getName()const;
    const QDate& getDate()const;
    std::vector<Activity>::iterator getDailyActHead();
    std::vector<Activity>::iterator getDailyActTail();
    const Activity getActivity(int pos)const;
    int getActivityLength();

private:
    QString name;
    QDate date;
    std::vector<Activity> dailyActivities;

};


#endif //ACTIVITY_TRACKER_REGISTER_H
