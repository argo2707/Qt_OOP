#include "bron.h"
#include "ui_bron.h"

Bron::Bron(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bron)
{
    ui->setupUi(this);
    model = new QStandardItemModel(10,6,this);
    ui->tableView->setModel(model);
    model->setHeaderData(0,Qt::Horizontal,"ФИО");
    model->setHeaderData(1,Qt::Horizontal,"Номер телефона");
    model->setHeaderData(2,Qt::Horizontal,"Сумма");
    model->setHeaderData(3,Qt::Horizontal,"Класс");
    model->setHeaderData(4,Qt::Horizontal,"Доп.услуги");
    model->setHeaderData(5,Qt::Horizontal,"Города");
}
Bron::~Bron()
{
    delete ui;
}
void Bron::on_pushButton_clicked()
{
    this->close();
    emit refund();
}
void Bron::on_pushButton_2_clicked()
{
    //tic_temp->gettic(i).getId_pas()
    model->clear();
    model = new QStandardItemModel(10,7,this);
    ui->tableView->setModel(model);
    model->setHeaderData(0,Qt::Horizontal,"ФИО");
    model->setHeaderData(1,Qt::Horizontal,"Номер телефона");
    model->setHeaderData(2,Qt::Horizontal,"Сумма");
    model->setHeaderData(3,Qt::Horizontal,"Класс");
    model->setHeaderData(4,Qt::Horizontal,"Доп.услуги");
    model->setHeaderData(5,Qt::Horizontal,"Города");
    model->setHeaderData(6,Qt::Horizontal,"Компания");
    catalog* cat_temp=catalog::get_instance();
    listticket* tic_temp=listticket::get_instance();
    listcompany* com_temp=listcompany::get_instance();
    QModelIndex index;
     QString s;
      for (int i=0; i<=model->rowCount();i++ )
       {
          if(tic_temp->count_tic()>i){
        s=cat_temp->get_pas(tic_temp->gettic(i).getId_pas()).getName()+" "+cat_temp->get_pas(tic_temp->gettic(i).getId_pas()).getSurname()
                +" "+cat_temp->get_pas(tic_temp->gettic(i).getId_pas()).getMiddle_name();
        index=model->index(i,0);
        model->setData(index,s);
        s=cat_temp->get_pas(tic_temp->gettic(i).getId_pas()).getTelephone();
        index=model->index(i,1);
        model->setData(index,s);
        s=QString::number((tic_temp->gettic(i).getSum()));
        index=model->index(i,2);
        model->setData(index,s);
        if(tic_temp->gettic(i).getClass())
        s="Бизнес";
        else
            s="Эконом";
        index=model->index(i,3);
        model->setData(index,s);
        if(tic_temp->gettic(i).getDop())
        s="Есть";
        else
            s="Нет";
        index=model->index(i,4);
        model->setData(index,s);
        s=tic_temp->gettic(i).getSity();
        index=model->index(i,5);
        model->setData(index,s);
        s=com_temp->get_com(tic_temp->gettic(i).getId_com()).getName();
        index=model->index(i,6);
        model->setData(index,s);}
      }
      ui->lineEdit->clear();
       ui->lineEdit_2->clear();
}
void Bron::on_pushButton_3_clicked()
{
        int temp=ui->lineEdit->text().toInt()-1;
        listticket* tic_temp=listticket::get_instance();
            if(tic_temp->count_tic()>temp){
                tic_temp->del(temp);
            ui->lineEdit->setText("Yes");}
            else
                ui->lineEdit->setText("No");
}
void Bron::on_pushButton_4_clicked()
{
   QModelIndex index;
   QString s;
   model->clear();
   model = new QStandardItemModel(10,4,this);
   ui->tableView->setModel(model);
   model->setHeaderData(0,Qt::Horizontal,"ФИО");
   model->setHeaderData(1,Qt::Horizontal,"Номер телефона");
   model->setHeaderData(2,Qt::Horizontal,"День рождения");
   model->setHeaderData(3,Qt::Horizontal,"Телефон");
    catalog* cat_temp=catalog::get_instance();
    for (int i=0;i< cat_temp->count_pas();i++ ) {
     s=cat_temp->getpas(i).getName()+" "+cat_temp->getpas(i).getSurname()
             +" "+cat_temp->getpas(i).getMiddle_name();
        if(ui->lineEdit_2->text()==s)
    {
          s=cat_temp->getpas(i).getName()+" "+cat_temp->getpas(i).getSurname()+" "+cat_temp->getpas(i).getMiddle_name();
          index=model->index(0,0);
          model->setData(index,s);
          QDate tmp=cat_temp->getpas(i).getDatebirth();
          index=model->index(0,1);
          model->setData(index,tmp);
          s=cat_temp->getpas(i).getTelephone();
          index=model->index(0,1);
          model->setData(index,s);
     }
    }
}
void Bron::on_pushButton_5_clicked()
{
    QModelIndex index;
    QString s;
    model->clear();
    model = new QStandardItemModel(10,3,this);
    ui->tableView->setModel(model);
    model->setHeaderData(0,Qt::Horizontal,"ФИО");
    model->setHeaderData(1,Qt::Horizontal,"Номер телефона");
    model->setHeaderData(2,Qt::Horizontal,"День рождения");
     catalog* cat_temp=catalog::get_instance();
     for (int i=0;i< cat_temp->count_pas();i++ ) {
           s=cat_temp->getpas(i).getName()+" "+cat_temp->getpas(i).getSurname()+" "+cat_temp->getpas(i).getMiddle_name();
           index=model->index(i,0);
           model->setData(index,s);
           QDate tmp=cat_temp->getpas(i).getDatebirth();
           index=model->index(i,2);
           model->setData(index,tmp);
           s=cat_temp->getpas(i).getTelephone();
           index=model->index(i,1);
           model->setData(index,s);
     }
}

void Bron::on_pushButton_6_clicked()
{
    QModelIndex index;
    QString s;
    model->clear();
    model = new QStandardItemModel(10,1,this);
    ui->tableView->setModel(model);
    model->setHeaderData(0,Qt::Horizontal,"Название");
    listcompany* com_temp=listcompany::get_instance();
     for (int i=0;i< com_temp->count_com();i++ ) {
         s=com_temp->getcom(i).getName();
           index=model->index(i,0);
           model->setData(index,s);
     }
}

void Bron::on_pushButton_7_clicked()
{
    int temp=ui->lineEdit->text().toInt()-1;
    catalog* cat_temp=catalog::get_instance();
        if(cat_temp->count_pas()>temp){
            cat_temp->del(temp);
        ui->lineEdit->setText("Yes");}
        else
            ui->lineEdit->setText("No");
}
void Bron::on_pushButton_8_clicked()
{
    int temp=ui->lineEdit->text().toInt()-1;
    listcompany* com_temp=listcompany::get_instance();
        if(com_temp->count_com()>temp){
            com_temp->del(temp);
        ui->lineEdit->setText("Yes");}
        else
            ui->lineEdit->setText("No");
}
void Bron::on_pushButton_9_clicked()
{
    listcompany* com_temp=listcompany::get_instance();
    com_temp->tmp=com_temp->tmp+1;
    company com(com_temp->tmp, ui->lineEdit_3->text());
    com_temp->add(com);
    ui->lineEdit_3->clear();
}
