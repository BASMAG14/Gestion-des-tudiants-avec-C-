/********************************************************************************
** Form generated from reading UI file 'addbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOX_H
#define UI_ADDBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addbox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *addbox)
    {
        if (addbox->objectName().isEmpty())
            addbox->setObjectName("addbox");
        addbox->resize(400, 438);
        addbox->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:30px;\n"
"color:green;\n"
"}"));
        label = new QLabel(addbox);
        label->setObjectName("label");
        label->setGeometry(QRect(32, 40, 321, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{background:light-gray;\n"
"font-size:30px;\n"
"color:white;\n"
"}"));
        label_2 = new QLabel(addbox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 130, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"color:green;\n"
"}"));
        lineEdit = new QLineEdit(addbox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 140, 161, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px;\n"
"}"));
        label_3 = new QLabel(addbox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 180, 81, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"color:green;\n"
"}"));
        lineEdit_2 = new QLineEdit(addbox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 180, 151, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px;\n"
"}"));
        lineEdit_3 = new QLineEdit(addbox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(140, 230, 151, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px;\n"
"}"));
        label_4 = new QLabel(addbox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 230, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"color:green;\n"
"}"));
        pushButton = new QPushButton(addbox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 300, 241, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:15px;\n"
"color:green;\n"
"}"));

        retranslateUi(addbox);

        QMetaObject::connectSlotsByName(addbox);
    } // setupUi

    void retranslateUi(QDialog *addbox)
    {
        addbox->setWindowTitle(QCoreApplication::translate("addbox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addbox", "Entrer les informations", nullptr));
        label_2->setText(QCoreApplication::translate("addbox", "RollNumber:", nullptr));
        label_3->setText(QCoreApplication::translate("addbox", "Nom:", nullptr));
        lineEdit_3->setText(QString());
        label_4->setText(QCoreApplication::translate("addbox", "Mati\303\251re", nullptr));
        pushButton->setText(QCoreApplication::translate("addbox", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addbox: public Ui_addbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOX_H
