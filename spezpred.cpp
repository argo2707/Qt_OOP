#include "spezpred.h"
#include "ui_spezpred.h"

spezpred::spezpred(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::spezpred)
{
    ui->setupUi(this);
    br=new Form2;
    ui->textEdit->setText("1 - Москва-Магадан, 2 взрослых, без пересадок\n Цена:6000\n"
"2 - Краснодар-Сургут, 1 взрослых,2 детей, без пересадок\n Цена:4999\n"
"3 - Санкт-Петербург-Новосибирск, 2 взрослых, 1 детей, без пересадок\n Цена:8900\n");
}

spezpred::~spezpred()
{
    delete ui;
}

void spezpred::on_pushButton_2_clicked()
{
    emit refund();
    this->close();
}

void spezpred::on_pushButton_clicked()
{
    if (ui->comboBox->currentIndex()==0)
    {
            br->sum1=6000/2;
            br->cou_v=2;
            br->gor="Москва-Магадан";
    }
        if (ui->comboBox->currentIndex()==1)
        {
                br->sum1=2000;
                br->sum1=2999/2;
                br->cou_v=1;
                br->cou_det=2;
                br->gor="Краснодар-Сургут";
        }
        if (ui->comboBox->currentIndex()==2)
        {
                br->sum1=7000/2;
                br->sum2=1900;
                br->cou_v=2;
                br->cou_det=1;
                br->gor="Санкт-Петербург-Новосибирск";
        }
    br->show();
    this->close();
}
