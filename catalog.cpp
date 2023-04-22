#include "catalog.h"
#include"listticket.h"

catalog* catalog::instance = nullptr;
catalog* catalog::get_instance()
{
    if(instance==nullptr)
        instance=new catalog();
    return instance;

}
void catalog::add(passenger pas){
    catal.append(pas);
}
void catalog::del(int id){
    listticket* tic=listticket::get_instance();
    tic->del_pas(catal[id].getId());
        catal.remove(id);

}
passenger catalog::getpas(int id)
{
    if(id<catal.size())
        return catal[id];
    passenger pas;
    return pas;
}
passenger catalog::get_pas(int id)
{
    for(int i=0;i<catal.count();i++)
    {
        if(catal[i].getId()==id)
            return catal[i];
    }
    passenger pas;
    return pas;
}
void catalog::update( passenger pas,int id){
    for(int i=0;i<catal.count();i++)
    {
        if(catal[i].getId()==id)
            catal[i]=pas;
    }
}
int catalog::count_pas()
{
    return catal.size();
}
