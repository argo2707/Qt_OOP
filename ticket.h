#ifndef TICKET_H
#define TICKET_H
#include <QTextStream>
#include<QWidget>
#include <QDate>

class ticket
{
private:
    int id;
    int id_pas;
    int id_com;
    QDate Datedepar;
    bool Dop;
    QString Sity;
    bool Class;
    int Sum;
public:
    ticket(){};
    ticket(int id,int id_pas,int id_com, QDate Datedepar,bool Dop,QString Sity,bool Class,int Sum);
    int getId();
    int getId_pas();
    int getId_com();
    QDate getDatedepar();
    bool getDop();
    QString getSity();
    bool getClass();
    int getSum();
    void setId(int id);
    void setId_pas(int id_pas);
    void setId_com(int id_com);
    void setDatedepar(QDate Datedepar);
    void setDop(bool Dop);
    void setSity(QString Sity);
    void setClass(bool Class);
    void setSum(int Sum);
};

#endif // TICKET_H
