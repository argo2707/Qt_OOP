#include "company.h"

company::company(int id, QString Name)
{
    this->id=id;
    this->Name=Name;
}
    int company::getId()
    {
        return id;
    }
    QString company::getName()
    {
        return Name;
    }

    void company::setId(int id){
        this->id=id;
    }
    void company::setName(QString Name){
        this->Name=Name;
    }
