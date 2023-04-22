#include "form2.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
    ui->lineEdit_6->clear();
    ui->lineEdit->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_5->clear();
    //sum1=sum1/cou_v;
    //sum2=sum2/cou_det;
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_pushButton_2_clicked()
{
    ui->lineEdit_6->clear();
    ui->lineEdit->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_5->clear();
    emit refund();
    this->close();
}

void Form2::on_pushButton_3_clicked()
{
    catalog* cat=catalog::get_instance();
    passenger pas;
    listticket* lt=listticket::get_instance();
    ticket tic;
    if (cou_det>0||cou_v>0)
    {
    if(ui->lineEdit_5->text()==0)
        ui->lineEdit_6->setText("Не рассчитали сумму!");
    else
    {
    ui->lineEdit_6->clear();
    pas.setName( ui->lineEdit->text());
    pas.setSurname( ui->lineEdit_3->text());
    pas.setMiddle_name( ui->lineEdit_2->text());
    if(cou_v>0)
    tic.setSum(sum1);
    else
    tic.setSum(sum2);
    pas.setDatebirth(ui->dateEdit_2->date());
    tic.setDatedepar(ui->dateEdit_3->date());
    pas.setTelephone(ui->lineEdit_4->text());
    tic.setClass(!cl);
    tic.setSity(gor);
    if(ui->checkBox->isChecked()||ui->checkBox_2->isChecked()||ui->checkBox_3->isChecked())
       tic.setDop(true);
    else
        tic.setDop(false);
    pas.setId(cat->count_pas()+1);
    tic.setId_pas(pas.getId());
    tic.setId_com(com);
    cat->add(pas);
    lt->add(tic);
    ui->lineEdit_6->clear();
    ui->lineEdit->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_5->clear();
    if(cou_v>0)
    {
        cou_v--;

    }
    else if(cou_det>0){
        cou_det--;}
    if(cou_det>0||cou_v>0)
    {
     ui->lineEdit_6->setText("Забронируйте еще"+QString::number(cou_v+cou_det)+" человека!");
    }else
    {
        ui->lineEdit_6->clear();
        ui->lineEdit_6->setText("Все люди забронированы");

    }}
    }
    else ui->lineEdit_6->setText("Нет людей");
}

void Form2::on_pushButton_clicked()
{
    int sum3=0;
    if(cou_v>0){sum3=sum1;}
    if(cou_det>0){sum3=sum2;}
    if(ui->checkBox->isChecked())
        sum3+=1500;
    if(ui->checkBox_2->isChecked())
        sum3+=200;
    if(ui->checkBox_3->isChecked())
        sum3+=500;
    ui->lineEdit_5->setText(QString::number(sum3));
}
