# Qt_OOP

*Предпочтение для разработки было отдано языку C++ и Qt Creator.*
## Формулировка технического задания
Данное приложение представляет собой адаптацию под сформулированную концепцию продукта и предназначено для обеспечения работы авиакассы. Основные функции приложения заключаются в предоставлении каждой роли пользователей соответствующей информации.

Функциональные требования к приложению (каждому требованию соответствует уникальный идентификатор):

FR-01 - Приложение должно обеспечивать добавление пассажиров в систему через меню администратора

FR-02 -	Приложение должно обеспечивать просмотр списка пассажиров через меню администратора

FR-03	- Приложение должно обеспечивать добавление авиакомпаний в систему через меню администратора

FR-04	- Приложение должно обеспечивать просмотр списка авиакомпаний через меню администратора

FR-05 -	Приложение должно обеспечивать удаление авиакомпаний через меню администратора

FR-06 -	Приложение должно обеспечивать добавление броней в систему через меню администратора

FR-07 -	Приложение должно обеспечивать просмотр списка броней через меню администратора

FR-08	- Приложение должно обеспечивать удаление броней через меню администратора

FR-09 -	Приложение должно обеспечивать поиск брони через меню администратора

FR-10 -	Приложение должно обеспечивать удаление пассажиров через меню администратора

FR-11 -	Приложение должно обеспечивать подсчёт стоимости билета в системе через меню пользователя

FR-12 -	Приложение должно обеспечивать возможность бронирование билетов через меню пользователя

FR-13 -	Приложение должно обеспечивать возможность просмотра специальных предложений через меню пользователя


Остальные требования к программе, которые не были описаны в требованиях выше, отражены в следующей таблице:

NFR-01 -	В приложении для бронирования не могут быть зарегистрированы дети без взрослых

NFR-02 -	В приложении должен быть реализован механизм защиты от, очевидно, неверных действий пользователя
Требуется реализовать техническое задание с использованием классов и объектов, спроектированных в разделе «Проектирование классов».

2.	Проектирование классов
2.1	Классы сущностей 
•	passenger(int id,QString Name,QString Surname, QString Middle_name, QDate Datebirth,QString Telephone) – используется для представления пассажира;
•	ticket(int id,int id_pas,int id_com, QDate Datedepar,bool Dop,QString Sity,bool Class,int Sum) – используется для представления брони;
•	company(int id,QString Name) – используется для представления авиакомпании;
2.2	Управляющие классы 
•	listcompany– используется для хранения компании;
Функции, реализованные в классе: 
    int tmp=0;
    static listcompany* get_instance();
    void add(company com);
    void del(int id);
    company getcom(int id);
    company get_com(int id);
    void update(company com,int id);
               int count_com();

•	listticket– используется для хранения броней;
Функции, реализованные в классе: 
   static listticket* get_instance();
    void add(ticket tick);
    void del(int id);
    ticket gettic(int id);
    void update(ticket tick,int id);
    int count_tic();
    void del_pas(int id);
     void del_com(int id);

•	catalog – используется для хранения пассажиров;
 Функции, реализованные в классе:
    static catalog* get_instance();
    void add(passenger pas);
    void del(int id);
    passenger getpas(int id);
    passenger get_pas(int id);
    void update(passenger pas,int id);
    int count_pas(); 

2.3	Интерфейсные классы
•	Bron – позволяет администратору добавлять данные о компании, просматривать, удалять данные об авиакомпании, пассажирах и броней;
•	Form2 – позволяет пользователю забронировать перелет, выбрав дополнительные функции;
•	MainW – позволяет пользователю рассчитать стоимость;
•	Sing – позволяет авторизоваться администратору и пользователю;
•	spezpred – позволяет пользователю выбрать специальные предложение и забронировать;
2.4	Используемые паттерн проектирования
На этапе проектирования был выбран порождающий паттерн проектирования– Singleton.
Одиночка — это порождающий паттерн, который гарантирует существование только одного объекта определённого класса, а также позволяет достучаться до этого объекта из любого места программы.
Архитектура паттерна Singleton основана на идее использования глобальной переменной, имеющей следующие важные свойства:
1.	Такая переменная доступна всегда. Время жизни глобальной переменной - от запуска программы до ее завершения.
2.	Предоставляет глобальный доступ, то есть, такая переменная может быть доступна из любой части программы.
Однако, использовать глобальную переменную некоторого типа непосредственно невозможно, так как существует проблема обеспечения единственности экземпляра, а именно, возможно создание нескольких переменных того же самого типа (например, стековых).
Для решения этой проблемы паттерн Singleton возлагает контроль над созданием единственного объекта на сам класс. Доступ к этому объекту осуществляется через статическую функцию-член класса, которая возвращает указатель или ссылку на него. Этот объект будет создан только при первом обращении к методу, а все последующие вызовы просто возвращают его адрес. Для обеспечения уникальности объекта, конструкторы и оператор присваивания объявляются закрытыми.
В разрабатываемом приложении Singleton используется для реализации классов: listcompany, listticket, catalog, listforfeedback, listforticket;
 
Рис.1 – UML диаграмма классов театра
3.	Разработка приложения
3.1	Разработка интерфейса приложения
Интерфейс приложения разработан с учетом спроектированных интерфейсных классов.
•	Форма «sing»
 
Рис.2 – Форма «sing»


Таблица 3 – Описание к форме sing
Наименование виджета	Программное имя виджета
QLabel	label
QLabel	label_2
QLabel	label_3
QLabel	label_4
QPushButton	pushbutton
QLineEdit	lineedit
QLineEdit	lineedit_2
QTextEdit	textedit





•	Форма «mainw»

 

Рис.3 – Форма «mainw»

Таблица 4 – Описание к форме «mainw»
Наименование виджета	Программное имя виджета
QLabel	label
QLabel	label_2
QLabel	label_3
QLabel	label_4
QLabel	label_5
QLabel	label_7
QPushButton	Pushbutton
QPushButton	pushbutton_2
QPushButton	pushbutton_3
QPushButton	pushbutton_4
QPushButton	pushbutton_5
QPushButton	pushbutton_6
QLineEdit	lineEdit
QLineEdit	lineEdit_2
QTextEdit	textEdit
QComboBox	combobox
QComboBox	Combobox_2
QComboBox	Combobox_3
QComboBox	Combobox_4
QGroupBox	groupbox
QRadioButton	Radiobutton
QRadioButton	Radiobutton_2





























•	Форма «form2»
 
Рис.4 – Форма «form2»



Таблица 5 – Описание к форме «form2»
Наименование виджета	Программное имя виджета
QLabel	label
QLabel	label_2
QLabel	label_3
QLabel	label_4
QLabel	label_5
QLabel	label_6
QLabel	label_7
QLabel	label_8
QPushButton	Pushbutton
QPushButton	pushbutton_2
QPushButton	pushbutton_3
QLineEdit	lineEdit
QLineEdit	lineEdit_2
QLineEdit	lineEdit_3
QLineEdit	lineEdit_4
QLineEdit	lineEdit_5
QLineEdit	lineEdit_6
QCheckBox	checkbox
QCheckBox	Checkbox_2
QCheckBox	Checkbox_3
QDateEdit	Dateedit_2
QDateEdit	Dateedit_3





































•	Форма «spezpred»
 
Рис.5 – Форма «spezpred»



Таблица 6 – Описание к форме «spezpred»
Наименование виджета	Программное имя виджета
QLabel	label
QLabel	Label_2
QPushButton	pushbutton
QPushButton	pushbutton_2
QTextEdit	textEdit
QComboBox	combobox












•	Форма «bron»

 
Рис. 6 – Форма «bron»

Таблица 7 – Описание к форме «bron»
Наименование виджета	Программное имя виджета
QLabel	label
QLabel	Label_2
QLabel	Label_3
QLineEdit	lineEdit
QLineEdit	lineEdit_2
QLineEdit	lineEdit_3
QPushButton	Pushbutton
QPushButton	pushbutton_2
QPushButton	pushbutton_3
QPushButton	pushbutton_4
QPushButton	pushbutton_5
QPushButton	pushbutton_6
QPushButton	pushbutton_7
QPushButton	pushbutton_8
QPushButton	pushbutton_9
QTableView	tableView
3.2	Реализация классов
класс «passenger» - необходим для представления пассажира и используется в классе «catalog». 
//passenger.h
#ifndef PASSENGER_H
#define PASSENGER_H
#include <QWidget>
#include <QTextStream>
#include<QWidget>
#include <QDate>
class passenger
{
private:
    int id;
    QString Name;
    QString Surname;
    QString Middle_name;
    QDate Datebirth;
    QString Telephone;
public:
    passenger();
    passenger(int id,QString Name,QString Surname, QString Middle_name, QDate Datebirth,QString Telephone);
    int getId();
    QString getName();
    QString getSurname();
    QString getMiddle_name();
    QDate getDatebirth();
    QString getTelephone();
    void setId(int id);
    void setName(QString Name);
    void setSurname(QString Surname);
    void setMiddle_name(QString Middle_name);
    void setDatebirth(QDate Datebirth);
    void setTelephone(QString Telephone);
};
	#endif // PASSENGER_H
//passenger.cpp
#include "passenger.h"

passenger::passenger(int id, QString Name, QString Surname, QString Middle_name, QDate Datebirth,QString Telephone)
{
    this->id=id;
    this->Name=Name;
    this->Datebirth=Datebirth;
    this->Middle_name=Middle_name;
    this->Surname=Surname;
    this->Telephone=Telephone;
}
    int passenger::getId()
    {
        return id;
    }
    QString passenger::getName()
    {
        return Name;
    }
    QString passenger::getSurname()
    {
        return Surname;
    }
    QString passenger::getMiddle_name(){
        return Middle_name;
    }
    QDate passenger::getDatebirth(){
        return Datebirth;
    }
    QString passenger::getTelephone(){
        return Telephone;
    }
    void passenger::setId(int id){
        this->id=id;
    }
    void passenger::setName(QString Name){
        this->Name=Name;
    }
    void passenger::setSurname(QString Surname){
        this->Surname=Surname;
    }
    void passenger::setMiddle_name(QString Middle_name){
        this->Middle_name=Middle_name;
    }
    void passenger::setDatebirth(QDate Datebirth){
        this->Datebirth=Datebirth;
    }
    void passenger::setTelephone(QString Telephone){
        this->Telephone=Telephone;
    }

Класс «catalog» - используется для работы с пассажирами. В данном классе реализованы функции добавления, поиска, просмотра, удаления пассажира, возврата размера списка.
//catalog.h
#ifndef CATALOG_H
#define CATALOG_H
#include<QList>
#include <passenger.h>
class catalog
{
protected:
    QVector<passenger> catal;
    catalog(){};
    static catalog* instance;
public:
    static catalog* get_instance();
    void add(passenger pas);
    void del(int id);
    passenger getpas(int id);
    passenger get_pas(int id);
    void update(passenger pas,int id);
    int count_pas();
};
#endif // CATALOG_H
//catalog.cpp
#include "catalog.h"
#include"listticket.h"

catalog* catalog::instance = nullptr;
catalog* catalog::get_instance()
{
    if(instance==nullptr)
        instance=new catalog();
    return instance;

}
void catalog::add(passenger pas){
    catal.append(pas);
}
void catalog::del(int id){
    listticket* tic=listticket::get_instance();
    tic->del_pas(catal[id].getId());
        catal.remove(id);

}
passenger catalog::getpas(int id)
{
    if(id<catal.size())
        return catal[id];
    passenger pas;
    return pas;
}
passenger catalog::get_pas(int id)
{
    for(int i=0;i<catal.count();i++)
    {
        if(catal[i].getId()==id)
            return catal[i];
    }
    passenger pas;
    return pas;
}
void catalog::update( passenger pas,int id){
    for(int i=0;i<catal.count();i++)
    {
        if(catal[i].getId()==id)
            catal[i]=pas;
    }
}
int catalog::count_pas()
{
    return catal.size();
}

Класс «bron» предназначен для связи интерфейса и функционала приложения. Функции предназначены для работы с администратором.
//bron.h
#ifndef BRON_H
#define BRON_H
#include<catalog.h>
#include<listcompany.h>
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

//bron.cpp
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
    ui->lineEdit_3->clear();}

Классы «ticket», «company», «listcompany», «listticket» имеют схожую логику с классами, приведёнными выше (код для всех классов можно посмотреть в         Приложении 1). 
Класс «calcul» используется для расчета стоимости билета. В нем обрабатывается запрос на расчет стоимости, посредством использования функции «calcul» (код всего класса можно посмотреть в Приложении 1)
Calcul::Calcul(int from,int where,bool klass)
{
    if (from==where)
        sum1=0;
    else
    switch (from)
    {
    case 0:
        if(where==1)
            sum1=3000;
        if(where==2||where==3||where==4||where==5||where==6||where==8)
            sum1=8000;
        if(where==7)
            sum1=20000;
        if(where==9)
            sum1=8800;
        if(where==10)
            sum1=4500;
        break;
     case 1:
        if(where==0)
            sum1=3000;
        if(where==2||where==3||where==4||where==5||where==6||where==8)
            sum1=6000;
        if(where==7)
            sum1=18000;
        if(where==9)
            sum1=7000;
        if(where==10)
            sum1=4000;
        break;

Класс «form2» используется для бронирования пользователем билета. В нем обрабатывается запрос на покупку, посредством использования функций «add» класса listticket и catalog (код всего класса можно посмотреть в Приложении 1)
//бронирование
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
}//расчёт стоимости
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
    ui->lineEdit_5->setText(QString::number(sum3));}
Класс «mainw» используется для выбора города и расчёта суммы билетов, в зависимости от количества людей, класса и городов. В нем обрабатывается запрос на расчёт стоимости и перехода на основные функции приложения, посредством использования функций «calcul» класса calcul (код всего класса можно посмотреть в Приложении 1)
//для кнопки "поиск"
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
}}
		//для кнопки забронировать
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

Класс «sing» используется для авторизации. В нем обрабатывается запрос на авторизацию пользователя (код всего класса можно посмотреть в Приложении 1)
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

