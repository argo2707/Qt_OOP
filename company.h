#ifndef COMPANY_H
#define COMPANY_H
#include <QTextStream>
#include<QWidget>
#include <QDate>

class company
{
private:
    int id;
    QString Name;

public:
    company(){};
    company(int id,QString Name);
    int getId();
    QString getName();
    void setId(int id);
    void setName(QString Name);
};
#endif // COMPANY_H
