 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,addbox(new  class  addbox (this) )
    ,findbox(new class findbox(this))
    ,updatebox(new updateBox(this))
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this, &MainWindow::add);
    connect(addbox,&addbox::enterInfo,this,&MainWindow::getInfo);
    connect(ui->pushButton_2, &QPushButton::clicked,this, &MainWindow::searchFun);
    connect(findbox ,&findbox::onSearch,this,&::MainWindow::onfind);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&MainWindow::updatefun);
    connect(updatebox,&updateBox::newSub,this,&MainWindow::updatefun);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addbox;
    delete findbox;
    delete updatebox;
}
QStringList rollnumberList;
QStringList nomList;
QStringList MatiereList;
bool found=false;
void MainWindow::add()
{
    addbox->show();
}
void MainWindow::getInfo(const QString & rn, const QString &n, const QString &s){
    rollnumberList.append(rn);
    nomList.append(n);
    MatiereList.append(s);
    QMessageBox::information(this,"success,",
                             "student add succesfuly" );

}

void MainWindow::searchFun()
{
    findbox->show() ;
}

void MainWindow::onfind(const QString &rn){
    for(int i=0;i<rollnumberList.length();i++){
        if(rn==rollnumberList[i]){
            found=true;
            QMessageBox::information(this,"success","Rollnumner:"+rollnumberList[i]+"\n", "nom de l'etudiant:"+nomList[i]+"\n","matiere"+MatiereList[i]);
            break;

        }

    }
    if(!found){
        QMessageBox::information(this,"erreur","invalid rollnumber");
    }
}






void MainWindow::updatefun()
{
    updatebox->show();
}
void MainWindow::onUpdate(const QString &rn, const QString &s){
    for(int i=0;i<rollnumberList.length();i++){
        if(rn==rollnumberList[i]){
            found=true;
        MatiereList[i]=s;
            QMessageBox::information(this,"success","Rollnumner:"+rollnumberList[i]+"\n", "nom de l'etudiant:"+nomList[i]+"\n","matiere"+MatiereList[i]);
            break;
        }

    }
    if(!found){
        QMessageBox::information(this,"erreur","invalid rollnumber");
    }

}
