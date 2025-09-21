#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addbox.h"
#include "findbox.h"
#include <updatebox.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QSqlDatabase db;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void add();
    void getInfo(const QString &rn, const QString &n, const QString &s);

    void searchFun();
    void onfind(const QString &rn);
    void checkRollnumber(const QString &rn);

    void updatefun();
    void onUpdate(const QString &rn,const QString &s);

private:
    Ui::MainWindow *ui;
    addbox *addbox;
    findbox *findbox;
    updateBox *updatebox;
};
#endif // MAINWINDOW_H
