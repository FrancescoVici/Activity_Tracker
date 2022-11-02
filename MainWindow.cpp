//
// Created by francesco on 19/10/22.
//

#include "MainWindow.h"

// CONSTRUCTORS
MainWindow::MainWindow(QWidget *parent)
        :QWidget(parent)
{
    this->setFixedSize(700, 500);

    this->registers=new QComboBox(this);
    this->registers->setGeometry(10, 10, 200, 50);

    this->addActButton = new QPushButton(this);
    this->addActButton->setGeometry(220, 10, 150, 50);
    this->addActButton->setText("Add Activity");

    this->deleteActButton = new QPushButton(this);
    this->deleteActButton->setGeometry(380, 10, 150, 50);
    this->deleteActButton->setText("Remove Activity");

    this->activityTable = new QTableWidget(0, 3 ,this);
    this->activityTable->setGeometry(10,70, 630, 420);
    this->setTableModel();

    connect(this->addActButton, SIGNAL(clicked()),this, SLOT(openUserInputWindow()));
    connect(this->deleteActButton, SIGNAL(clicked()), this, SLOT(openUserDeleteWindow()));
    connect(this, SIGNAL(activityChanged(bool)), this, SLOT(updateActivitiesTable(bool)));
    connect(this->registers, SIGNAL(currentTextChanged(const QString&)), this, SLOT(updateActivitiesTable(const QString&)));
}

// DESTRUCTOR
MainWindow::~MainWindow()
{
    for(auto itr=registersList.begin(); itr<registersList.end();itr++)
        delete(*itr);
    delete(addActButton);
    delete(deleteActButton);
    delete(registers);
    delete(activityTable);

}

// SETTER
void MainWindow::setTableModel()
{
    auto labels= new QStringList();
    labels->push_back("Initial Time");
    labels->push_back("Final Time");
    labels->push_back("Activity");
    this->activityTable->setHorizontalHeaderLabels(*labels);
    this->activityTable->setColumnWidth(0, 100);
    this->activityTable->setColumnWidth(1, 100);
    this->activityTable->setColumnWidth(2, 420);
}

void MainWindow::addRegister(Register* reg)
{
    auto itr=this->registersList.begin();
    this->registersList.insert(itr, reg);
    this->registers->addItem(reg->getName());
}

//void MainWindow::delRegister(Register* reg) {}

void MainWindow::addRowsToRegister(const QString& reg)
{
    int i=0;
    for(auto itr=this->getRegister(reg)->getDailyActHead();itr<this->getRegister(reg)->getDailyActTail(); itr++){
        if(i+1>this->activityTable->rowCount()) {
            this->activityTable->insertRow(i);
            this->activityTable->setRowHeight(i, 40);
        }

        auto init=(*itr)->getInitTime();
        auto itemInitTime = new QTableWidgetItem(init.toString("HH:mm:ss"));
        this->activityTable->setItem(i, 0, itemInitTime);

        auto fin=(*itr)->getFinTime();
        auto itemFinTime = new QTableWidgetItem(fin.toString("HH:mm:ss"));
        this->activityTable->setItem(i, 1, itemFinTime);

        auto desc=(*itr)->getDescription();
        auto itemDesc = new QTableWidgetItem(desc);
        this->activityTable->setItem(i, 2, itemDesc);

        ++i;
    }

    while(i<this->activityTable->rowCount()){
        this->activityTable->removeRow(i);
        ++i;
    }
}


// GETTER
std::vector<Register*>::iterator MainWindow::getRegistersHead(){    return this->registersList.begin();   }

std::vector<Register*>::iterator MainWindow::getRegistersTail(){    return this->registersList.end();     }

Register* MainWindow::getRegister(const QString& reg){
    auto itr=this->getRegistersHead();
    while((*itr)->getName()!=reg)
        ++itr;
    return *itr;
}


// SLOTS
void MainWindow::openUserInputWindow(bool click)
{
    if(click==0){
        auto *input=new UserInputWindow(this);
        input->show();
    }
}

void MainWindow::openUserDeleteWindow(bool click)
{
    if(click==0){
        auto descriptions=new QList<QString>;
        for(auto itr=this->getRegister(this->registers->currentText())->getDailyActHead();itr<this->getRegister(this->registers->currentText())->getDailyActTail(); itr++){
            descriptions->push_back((*itr)->getDescription());
        }

        auto *del=new UserDeleteWindow(*descriptions,this);
        del->show();
    }
}

void MainWindow::pushNewAct(Activity* newAct)
{
    this->getRegister(this->registers->currentText())->addActivity(newAct);
    emit activityChanged(true);
}

void MainWindow::receiveActivityToDelete(const QString &toRemove)
{
    this->getRegister(this->registers->currentText())->removeActivity(toRemove);
    emit activityChanged(true);
}

void MainWindow::updateRegistersBox(bool changed)
{
    if (changed){
        auto itr = registersList.begin();
        for (int i = 0; i < registersList.size(); i++) {
            registers->addItem((*itr)->getName());
            itr++;
        }
    }
}

void MainWindow::updateActivitiesTable(bool changed)
{
    if (changed){
        this->activityTable->clear();
        this->setTableModel();
        this->addRowsToRegister(this->registers->currentText());
    }
}

void MainWindow::updateActivitiesTable(const QString& current)
{
    this->activityTable->clear();
    this->setTableModel();
    this->addRowsToRegister(current);
}