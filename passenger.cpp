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
