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
