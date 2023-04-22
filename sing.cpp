#include "sing.h"
#include "ui_sing.h"

Sing::Sing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sing)
{
    ui->setupUi(this);
    start=new MainW;
    connect(start,&MainW::refund,this,&Sing::show);
}

Sing::~Sing()
{
    delete ui;
}

void Sing::on_pushButton_clicked()
{
    if (ui->lineEdit->text()=="user"&&ui->lineEdit_2->text()=="1"){
        this->close();
        start->status=false;
          start->show();
    }
    else if (ui->lineEdit->text()=="admin"&&ui->lineEdit_2->text()=="2"){
        this->close();
        start->status=true;
          start->show();
    }
    else
        ui->textEdit->setText("Неверные данные!");

}
