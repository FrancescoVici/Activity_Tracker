//
// Created by francesco on 19/10/22.
//

#include "MainWindow.h"

// CONSTRUCTORS
MainWindow::MainWindow(QWidget *parent)
        :QWidget(parent)
{
    this->setFixedSize(1000, 500);

    addActButton = new QPushButton(this);
    addActButton->setGeometry(10, 10, 150, 50);
    addActButton->setText("Add Activity");

    removeActButton = new QPushButton(this);
    removeActButton->setGeometry(170, 10, 150, 50);
    removeActButton->setText("Remove Activity");

    registers=new QComboBox(this);
    registers->setGeometry(10, 80, 150, 50);

    activityTable = new QTableWidget(1, 4 ,this);
    activityTable->setGeometry(170,80, 780, 400);
    auto labels= new QStringList();
    labels->push_back("Checked");
    labels->push_back("Description");
    labels->push_back("Initial Time");
    labels->push_back("Final Time");
    this->activityTable->setHorizontalHeaderLabels(*labels);
    activityTable->resizeColumnsToContents();



    connect(this->addActButton, SIGNAL(clicked()),this, SLOT(openNewInputWindow()));
    /// connect(this->removeActButton, SIGNAL(clicked()), this, SLOT(removeActivity(Activity*)));
    connect(this, SIGNAL(activityChanged(bool)), this, SLOT(updateActivitiesTable(bool)));


}

// DESTRUCTOR
MainWindow::~MainWindow()
{
    for(auto itr=registersList.begin(); itr<registersList.end();itr++)
        delete(*itr);
    delete(addActButton);
    delete(removeActButton);
    delete(registers);
    delete(activityTable);

}

// SETTER
void MainWindow::addRegister(Register* reg)
{
    auto itr=this->registersList.begin();
 /*   while(reg->getDate()!=(*itr)->getDate()){
        ++itr;
    }*/
    this->registersList.insert(itr, reg);
    this->registers->addItem(reg->getName());
}

//void MainWindow::delRegister(Register* reg) {}



// GETTER
std::vector<Register*>::iterator MainWindow::getRegistersHead(){    return this->registersList.begin();   }

std::vector<Register*>::iterator MainWindow::getRegistersTail(){    return this->registersList.end();     }

Register* MainWindow::getCurrentReg(){
    auto itr=this->getRegistersHead();
    while((*itr)->getName()!=this->registers->currentText())
        ++itr;
    return *itr;
}


// SLOTS
void MainWindow::openNewInputWindow(bool click)
{
    if(click==0){
        auto *input=new UserInputWindow(this);
        input->show();
    }
}

void MainWindow::pushNewAct(Activity* newAct)
{
    this->getCurrentReg()->addActivity(newAct);
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
        this->activityTable->setRowCount(this->getCurrentReg()->getActivityLenght());
        int i=1;
        for(auto itr=this->getCurrentReg()->getDailyActHead();itr<=this->getCurrentReg()->getDailyActTail(); itr++){

            auto desc=(*itr)->getDescription();
            auto itemDesc = new QTableWidgetItem(desc);
            this->activityTable->setItem(i, 2, itemDesc);

            auto init=(*itr)->getInitTime();
            auto itemInitTime = new QTableWidgetItem(init.toString("HH:mm:ss"));
            this->activityTable->setItem(i, 3, itemInitTime);

            auto fin=(*itr)->getFinTime();
            auto itemFinTime = new QTableWidgetItem(fin.toString("HH:mm:ss"));
            this->activityTable->setItem(i, 4, itemFinTime);

            i++;
        }
    }
}