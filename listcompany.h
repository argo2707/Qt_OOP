#ifndef LISTCOMPANY_H
#define LISTCOMPANY_H
#include<company.h>
#include<listticket.h>

class listcompany
{
protected:
    QVector<company> list;
    listcompany(){};
    static listcompany* instance;
public:
    int tmp=0;
    static listcompany* get_instance();
    void add(company com);
    void del(int id);
    company getcom(int id);
    company get_com(int id);
    void update(company com,int id);
    int count_com();
};

#endif // LISTCOMPANY_H
