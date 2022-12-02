//
// Created by franc on 08/10/2022.
//

#ifndef ACTIVITY_TRACKER_ACTIVITY_H
#define ACTIVITY_TRACKER_ACTIVITY_H

#include <QApplication>
#include <QString>
#include <QTime>



class Activity {
public:
    // CONSTRUCTORS
    Activity(const QString& des, const QTime& init, const QTime& fin);
    // DESTRUCTOR
    ~Activity()=default;

    // SETTER
    void setDescription(const QString& des);
    void setInitTime(const QTime& init);
    void setEndTime(const QTime& fin);

    // GETTER
    const QString& getDescription() const;
    const QTime& getInitTime()const;
    const QTime& getEndTime()const;

private:
    QString description;
    QTime initialTime;
    QTime finalTime;
};


#endif //ACTIVITY_TRACKER_ACTIVITY_H
