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
    passenger(){};
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
