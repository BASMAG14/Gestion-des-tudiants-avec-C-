#include "addbox.h"
#include "ui_addbox.h"

addbox::addbox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addbox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&addbox::getVal);

}

addbox::~addbox()
{
    delete ui;
}




void addbox::getVal()
{
    QString rollNumber=ui->lineEdit->text();
    QString name=ui->lineEdit_2->text();
    QString Matiere=ui->lineEdit_3->text();
    emit enterInfo(rollNumber,name,Matiere);
}

