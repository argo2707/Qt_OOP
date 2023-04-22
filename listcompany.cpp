#include "listcompany.h"

listcompany* listcompany::instance = nullptr;
listcompany* listcompany::get_instance()
{
    if(instance==nullptr)
        instance=new listcompany();
    return instance;

}
void listcompany::add(company com){
    list.append(com);
}
void listcompany::del(int id){
    listticket* tic=listticket::get_instance();
    tic->del_com(list[id].getId());
            list.remove(id);
}
company listcompany::getcom(int id)
{
    if(id<list.size())
        return list[id];
    company comp;
    return comp;
}
company listcompany::get_com(int id)
{
    for(int i=0;i<list.count();i++)
    {
        if(list[i].getId()==id)
            return list[i];
    }
    company comp;
    return comp;
}
void listcompany::update( company com,int id){
    for(int i=0;i<list.count();i++)
    {
        if(list[i].getId()==id)
            list[i]=com;
    }
}
int listcompany::count_com()
{
    return list.size();
}
