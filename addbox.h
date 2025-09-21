#ifndef ADDBOX_H
#define ADDBOX_H

#include <QDialog>

namespace Ui {
class addbox;
}

class addbox : public QDialog
{
    Q_OBJECT

public:
    explicit addbox(QWidget *parent = nullptr);
    ~addbox();
signals:
    void enterInfo(const QString &rn, const QString & n, const  QString &s);
private slots:
    void getVal();



private:
    Ui::addbox *ui;
};

#endif // ADDBOX_H
