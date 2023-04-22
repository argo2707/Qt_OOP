#include "sing.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sing w;
    w.show();
    return a.exec();
}

//mainw.cpp
#include "mainw.h"
#include "./ui_mainw.h"

MainW::MainW(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainW)
{
    ui->setupUi(this);
    first=new Form2;
    tab=new Bron;
    spez=new spezpred;
    connect(first,&Form2::refund,this,&MainW::show);
    connect(tab,&Bron::refund,this,&MainW::show);
    connect(spez,&spezpred::refund,this,&MainW::show);
    ui->comboBox_4->clear();
    listcompany* com_temp=listcompany::get_instance();
    for (int i=0;i<com_temp->count_com();i++) {
        ui->comboBox_4->addItem(com_temp->getcom(i).getName());
    }

}
MainW::~MainW()
{
    delete ui;
}
void MainW::on_pushButton_3_clicked()
{
int k=(ui->lineEdit->text().toInt());
int l=ui->lineEdit_2->text().toInt();
    if (ui->comboBox_3->currentIndex()==0)
    {
        first->sum1=cal->sum1*k;
        first->sum2=cal->sum1*l*0.75;
    }
    if (ui->comboBox_3->currentIndex()==1)
    {
        first->sum1=cal->sum1*k*0.85;
        first->sum2=cal->sum1*l*0.75*0.85;
    }
    if (ui->comboBox_3->currentIndex()==2){
        first->sum1=cal->sum1*k*0.7;
        first->sum2=cal->sum1*l*0.75*0.7;
    }
    first->gor=ui->comboBox->currentText()+"-"+
            ui->comboBox_2->currentText();

    first->cl=ui->radioButton->isChecked();
    first->cou_v=(ui->lineEdit->text().toInt());
    first->cou_det=ui->lineEdit_2->text().toInt();
    first->com=ui->comboBox_3->currentIndex();
    first->show();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    this->close();
}

void MainW::on_pushButton_clicked()
{
    listcompany* com_temp=listcompany::get_instance();
    for (int i=0;i<com_temp->count_com();i++) {
        ui->comboBox_4->addItem(com_temp->getcom(i).getName());
    }
    if(ui->lineEdit->text().toInt()==0)
        ui->textEdit->setText("Без взрослых дети не летают!"); //выводим сумму количество на стоимость
    else
    {
    ui->textEdit->clear();
int k=(ui->lineEdit->text().toInt())+0.75*(ui->lineEdit_2->text().toInt());

cal=new Calcul(ui->comboBox->currentIndex(),
               ui->comboBox_2->currentIndex(),
               ui->radioButton->isChecked());

 ui->textEdit->setText("1 - "+QString::number(cal->sum1*k)+" (Без пересадок)\n"+
                       "2 - "+QString::number(cal->sum1*0.85*k)+" (1 пересадка)\n"+
                       "3 - "+QString::number(cal->sum1*0.7*k)+" (2 пересадки)\n"); //выводим сумму количество на стоимость
}
}
void MainW::on_radioButton_clicked()
{
    ui->textEdit->clear();
}

void MainW::on_radioButton_2_clicked()
{
    ui->textEdit->clear();
}

void MainW::on_pushButton_4_clicked()
{
    if(status){
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    tab->status=status;
    tab->show();
    this->close();
    }
}

void MainW::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    spez->status=status;
    spez->show();
    spez->br=first;
    this->close();
}

void MainW::on_pushButton_5_clicked()
{
    emit refund();
}

void MainW::on_comboBox_4_activated(const QString &arg1)
{

}

void MainW::on_pushButton_6_clicked()
{
    ui->comboBox_4->clear();
    listcompany* com_temp=listcompany::get_instance();
    for (int i=0;i<com_temp->count_com();i++) {
        ui->comboBox_4->addItem(com_temp->getcom(i).getName());
    }
}
