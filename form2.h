#include <QWidget>
#include <QFile>
#include <QtCore/QFile>
#include <QTextStream>
//Form2.h
#include<QWidget>
#include<catalog.h>
#include<listticket.h>
namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();
    bool cl;
    int cou_v=0;
    int cou_det=0;
    int sum1=0;
    int sum2=0;
    int com=1;
    QString gor;
signals:
    void refund();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();

private:
    Ui::Form2 *ui;
};

#endif // FORM2_H
