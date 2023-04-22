#ifndef BRON_H
#define BRON_H
#include<catalog.h>
#include<listcompany.h>
//bron.h
#include<listticket.h>
#include <QWidget>
#include<QStandardItemModel>
#include <QFile>
#include <QtCore/QFile>
#include <QTextStream>
namespace Ui {
class Bron;
}
class Bron : public QWidget
{
    Q_OBJECT
public:
    explicit Bron(QWidget *parent = nullptr);
    ~Bron();
    bool status;
    int com=0;
signals:
    void refund();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
private:
    Ui::Bron *ui;
    QStandardItemModel *model;
};
#endif // BRON_H
