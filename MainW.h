#ifndef MAINW_H
#define MAINW_H

#include <QMainWindow>
#include <calcul.h>
#include "form2.h"
#include"bron.h"
#include <QFile>
#include <QtCore/QFile>
#include <QTextStream>
#include "spezpred.h"
#include<catalog.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainW; }
QT_END_NAMESPACE

class MainW : public QMainWindow
{
    Q_OBJECT

public:
    MainW(QWidget *parent = nullptr);
    ~MainW();
 bool status;
signals:
 void refund();
private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();
    void on_comboBox_4_activated(const QString &arg1);
    void on_pushButton_6_clicked();
private:
    Calcul* cal;
    Form2* first;
    Bron*tab;
    spezpred *spez;
    Ui::MainW *ui;
};
#endif // MAINW_H
