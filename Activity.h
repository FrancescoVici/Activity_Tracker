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
    void setFinTime(const QTime& fin);

    // GETTER
    const QString& getDescription();
    const QTime& getInitTime();
    const QTime& getFinTime();

private:
    QString descriprion;
    QTime initialTime;
    QTime finalTime;
};


#endif //ACTIVITY_TRACKER_ACTIVITY_H
