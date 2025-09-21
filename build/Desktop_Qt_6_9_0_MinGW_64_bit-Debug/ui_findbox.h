/********************************************************************************
** Form generated from reading UI file 'findbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDBOX_H
#define UI_FINDBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_findbox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *findbox)
    {
        if (findbox->objectName().isEmpty())
            findbox->setObjectName("findbox");
        findbox->resize(400, 300);
        label = new QLabel(findbox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 401, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background:light-gray;\n"
"font-size:30px;\n"
"color:white\n"
"}"));
        label_2 = new QLabel(findbox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 110, 151, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px;\n"
"color:Blue;\n"
"}"));
        lineEdit = new QLineEdit(findbox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 110, 141, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size:15px;\n"
"}"));
        pushButton = new QPushButton(findbox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 190, 93, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:15px;\n"
"color:blue;\n"
"}"));

        retranslateUi(findbox);

        QMetaObject::connectSlotsByName(findbox);
    } // setupUi

    void retranslateUi(QDialog *findbox)
    {
        findbox->setWindowTitle(QCoreApplication::translate("findbox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("findbox", "Recherche Window", nullptr));
        label_2->setText(QCoreApplication::translate("findbox", "enter rollnumber:", nullptr));
        pushButton->setText(QCoreApplication::translate("findbox", "Rechercher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findbox: public Ui_findbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDBOX_H
