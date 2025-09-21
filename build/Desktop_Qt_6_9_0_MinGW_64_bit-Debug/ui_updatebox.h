/********************************************************************************
** Form generated from reading UI file 'updatebox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBOX_H
#define UI_UPDATEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updateBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *updateBox)
    {
        if (updateBox->objectName().isEmpty())
            updateBox->setObjectName("updateBox");
        updateBox->resize(400, 300);
        label = new QLabel(updateBox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 401, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{background:light-gray;\n"
"font-size:15px;\n"
"color:white;\n"
"\n"
"}"));
        label_2 = new QLabel(updateBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 131, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"color:blue;\n"
"\n"
"}"));
        lineEdit = new QLineEdit(updateBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 95, 221, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px;\n"
"\n"
"}"));
        lineEdit_2 = new QLineEdit(updateBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(142, 155, 201, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px;\n"
"\n"
"\n"
"}"));
        pushButton = new QPushButton(updateBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 230, 93, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButtonl{\n"
"font-size:15px;\n"
"\n"
"\n"
"}"));
        label_3 = new QLabel(updateBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 111, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"color:blue;\n"
"\n"
"}"));

        retranslateUi(updateBox);

        QMetaObject::connectSlotsByName(updateBox);
    } // setupUi

    void retranslateUi(QDialog *updateBox)
    {
        updateBox->setWindowTitle(QCoreApplication::translate("updateBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("updateBox", "  Modifier Window", nullptr));
        label_2->setText(QCoreApplication::translate("updateBox", "rollnumber:", nullptr));
        pushButton->setText(QCoreApplication::translate("updateBox", "Modifier", nullptr));
        label_3->setText(QCoreApplication::translate("updateBox", "nouveau mati\303\251re", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateBox: public Ui_updateBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOX_H
