#include "findbox.h"
#include "ui_findbox.h"  // NE PAS oublier ce fichier généré automatiquement

findbox::findbox(QWidget *parent) :
    QDialog(parent)
    ,ui(new Ui::findbox)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &findbox::searchStd);
}

findbox::~findbox() {
    delete ui;
}

void findbox::searchStd() {
    QString stdrollnumber = ui->lineEdit->text();  // Assurez-vous que 'lineEdit' existe dans findbox.ui
    emit onSearch(stdrollnumber);
}
