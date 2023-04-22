#ifndef LISTTICKET_H
#define LISTTICKET_H
#include<ticket.h>
#include<catalog.h>

class listticket
{
protected:
    QVector<ticket> tic;
    listticket(){};
    static listticket* instance;
public:
    static listticket* get_instance();
    void add(ticket tick);
    void del(int id);
    ticket gettic(int id);
    void update(ticket tick,int id);
    int count_tic();
    void del_pas(int id);
    void del_com(int id);
};

#endif // LISTTICKET_H
