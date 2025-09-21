#ifndef FINDBOX_H
#define FINDBOX_H

#include <QDialog>

namespace Ui {
class findbox;
}

class findbox : public QDialog
{
    Q_OBJECT
public:
    explicit findbox(QWidget *parent = nullptr);
    ~findbox();
signals:
    void onSearch(const QString &rn);
private slots:
    void searchStd();


private:
    Ui::findbox *ui;
};

#endif // FINDBOX_H
