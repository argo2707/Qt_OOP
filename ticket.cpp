#include "ticket.h"

ticket::ticket(int id,int id_pas,int id_com, QDate Datedepar,bool Dop,QString Sity,bool Class,int Sum)
{
    this->id=id;
    this->id_pas=id_pas;
    this->id_com=id_com;
    this->Class=Class;
    this->Datedepar=Datedepar;
    this->Dop=Dop;
    this->Sity=Sity;
    this->Sum=Sum;
}
int ticket::getId_pas()
{
    return id_pas;
}
void ticket::setId_pas(int id_pas){
    this->id_pas=id_pas;
}
int ticket::getId_com()
{
    return id_com;
}
void ticket::setId_com(int id_com){
    this->id_com=id_com;
}
QDate ticket::getDatedepar(){
    return Datedepar;
}
bool ticket::getDop(){
    return Dop;
}
QString ticket::getSity(){
    return Sity;
}
bool ticket::getClass(){
    return Class;
}

int ticket::getSum(){
    return Sum;
}
void ticket::setDatedepar(QDate Datedepar){
    this->Datedepar=Datedepar;
}
void ticket::setDop(bool Dop){
    this->Dop=Dop;
}
void ticket::setSity(QString Sity){
    this->Sity=Sity;
}
void ticket::setClass(bool Class){
    this->Class=Class;
}
void ticket::setSum(int Sum){
    this->Sum=Sum;
}
int ticket::getId()
{
    return id;
}
void ticket::setId(int id){
    this->id=id;
}
