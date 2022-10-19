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

    QStandardItemModel* model=new QStandardItemModel(0,4);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Checked"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Activity Description"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("From (time)"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("To (time)"));

    activityTable = new QTableView(this);
    activityTable->setGeometry(10,70, 980, 420);
    activityTable->setModel(model);
    activityTable->resizeColumnsToContents();

    registers=new QComboBox(this);
    registers->setGeometry(100, 100, 100, 100);
    auto itr=registersList.begin();
    for(int i=0; i<registersList.size();i++)
    {
        registers->addItem((*itr)->getName());
        itr++;
    }


    connect(this->addActButton, SIGNAL(clicked()),this, SLOT(openNewInputWindow()));

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
    this->registersList.push_back(reg);
}

// GETTER
std::vector<Register*>::iterator MainWindow::getRegistersHead(){    return registersList.begin();   }

std::vector<Register*>::iterator MainWindow::getRegistersTail(){    return registersList.end();     }

Register* MainWindow::getRegisterAtPos(int pos)
{
    auto itr=this->getRegistersHead();
    for(int i=0; i<pos; i++){
        itr++;
    }
    return (*itr);
}

Register* MainWindow::getCurrentRegister()
{
    return this->getRegisterAtPos(registers->currentIndex());
}

// SLOTS
void MainWindow::openNewInputWindow(bool click)
{
    if(click==0){
        UserInputWindow *input=new UserInputWindow(this->getCurrentRegister(), this);
        input->show();
    }
}

void MainWindow::createNewActivity(QString desc, QTime initT, QTime finT)
{
    Activity *toAdd=new Activity(desc, initT, finT);
    this->getCurrentRegister()->addActivity(toAdd);

    this->updateActivityTable(toAdd, 1);
}

// OTHERS
void MainWindow::updateActivityTable(Activity *added, bool addRow)
{
    QAbstractItemModel *model= this->activityTable->model();
    if(addRow){
        int c=model->rowCount();
        c++;
        model->insertRow(c);
        QModelIndex i1=model->index(c, 1);
        QModelIndex i2=model->index(c, 2);
        QModelIndex i3=model->index(c, 3);
        QModelIndex i4=model->index(c, 4);
        // TODO add a checkable button for any row
        model->setData(i2, added->getDescription());
        model->setData(i3, added->getInitTime());
        model->setData(i4, added->getFinTime());

        this->activityTable->setModel(model);
        this->activityTable->show();
    }

}