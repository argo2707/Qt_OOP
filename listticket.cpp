#include "listticket.h"

listticket* listticket::instance = nullptr;
listticket* listticket::get_instance()
{
    if(instance==nullptr)
        instance=new listticket();
    return instance;

}
void listticket::add(ticket tick){
    tic.append(tick);
}
void listticket::del(int id){

    for(int i=0;i<tic.count();i++)
    {
        if(tic[i].getId()==id)
            tic.remove(i);
    }
}
ticket listticket::gettic(int id)
{
    if(id<tic.size())
        return tic[id];
    ticket tick;
    return tick;
}
void listticket::update( ticket tick,int id){
    for(int i=0;i<tic.count();i++)
    {
        if(tic[i].getId()==id)
            tic[i]=tick;
    }
}
int listticket::count_tic()
{
    return tic.size();
}
void listticket::del_pas(int id){
    for(int i=0;i<tic.count();i++)
    {
        if(tic[i].getId_pas()==id)
            tic.remove(i);
    }
}
void listticket::del_com(int id){
    for(int i=0;i<tic.count();i++)
    {
        if(tic[i].getId_com()==id)
            tic.remove(i);
    }
}
