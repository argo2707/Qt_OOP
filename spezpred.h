#ifndef SPEZPRED_H
#define SPEZPRED_H

#include <QWidget>
#include<form2.h>

namespace Ui {
class spezpred;
}

class spezpred : public QWidget
{
    Q_OBJECT

public:
    explicit spezpred(QWidget *parent = nullptr);
    ~spezpred();
    Form2* br;
    bool status;
signals:
    void refund();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::spezpred *ui;
};

#endif // SPEZPRED_H
