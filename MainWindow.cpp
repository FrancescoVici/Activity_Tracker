//
// Created by francesco on 19/10/22.
//

#include "MainWindow.h"

// CONSTRUCTORS
MainWindow::MainWindow(QWidget *parent)
        :QWidget(parent)
{
    this->setFixedSize(700, 500);

    registers=new QComboBox(this);
    registers->setGeometry(10, 10, 200, 50);

    addActButton = new QPushButton(this);
    addActButton->setGeometry(220, 10, 150, 50);
    addActButton->setText("Add Activity");

    activityTable = new QTableWidget(0, 4 ,this);
    activityTable->setGeometry(10,70, 680, 420);
    auto labels= new QStringList();
    labels->push_back("Initial Time");
    labels->push_back("Final Time");
    labels->push_back("Activity");
    labels->push_back("DEL");
    this->activityTable->setHorizontalHeaderLabels(*labels);
    this->activityTable->setColumnWidth(0, 100);
    this->activityTable->setColumnWidth(1, 100);
    this->activityTable->setColumnWidth(2, 420);
    this->activityTable->setColumnWidth(3, 60);



    connect(this->addActButton, SIGNAL(clicked()),this, SLOT(openNewInputWindow()));
    // connect(this->removeActButton, SIGNAL(clicked()), this, SLOT(removeActivity(Activity*)));
    connect(this, SIGNAL(activityChanged(bool)), this, SLOT(updateActivitiesTable(bool)));
    // TODO adattare updateActivitiesTable per ricevere anche un QString
    // connect(this->registers, SIGNAL(currentTextChanged(const QString&)), this, SLOT(updateActivitiesTable(bool)));


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
        this->activityTable->rowCount();

        auto labels= new QStringList();
        labels->push_back("Initial Time");
        labels->push_back("Final Time");
        labels->push_back("Activity");
        labels->push_back("DEL");
        this->activityTable->setHorizontalHeaderLabels(*labels);
        this->activityTable->setColumnWidth(0, 100);
        this->activityTable->setColumnWidth(1, 100);
        this->activityTable->setColumnWidth(2, 420);
        this->activityTable->setColumnWidth(3, 60);

        int i=0;

        for(auto itr=this->getCurrentReg()->getDailyActHead();itr<this->getCurrentReg()->getDailyActTail(); itr++){
            if(i+1>this->activityTable->rowCount())
                this->activityTable->insertRow(i);

            auto init=(*itr)->getInitTime();
            auto itemInitTime = new QTableWidgetItem(init.toString("HH:mm:ss"));
            this->activityTable->setItem(i, 0, itemInitTime);

            auto fin=(*itr)->getFinTime();
            auto itemFinTime = new QTableWidgetItem(fin.toString("HH:mm:ss"));
            this->activityTable->setItem(i, 1, itemFinTime);

            auto desc=(*itr)->getDescription();
            auto itemDesc = new QTableWidgetItem(desc);
            this->activityTable->setItem(i, 2, itemDesc);

            // TODO aggiungi tasto "Elimina Attività" in ogni riga nella colonna di indice 3

            i++;
        }
    }
}