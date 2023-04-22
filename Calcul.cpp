#include "calcul.h"

Calcul::Calcul(int from,int where,bool klass)
{
    if (from==where)
        sum1=0;
    else
    switch (from)
    {
    case 0:
        if(where==1)
            sum1=3000;
        if(where==2||where==3||where==4||where==5||where==6||where==8)
            sum1=8000;
        if(where==7)
            sum1=20000;
        if(where==9)
            sum1=8800;
        if(where==10)
            sum1=4500;
        break;
     case 1:
        if(where==0)
            sum1=3000;
        if(where==2||where==3||where==4||where==5||where==6||where==8)
            sum1=6000;
        if(where==7)
            sum1=18000;
        if(where==9)
            sum1=7000;
        if(where==10)
            sum1=4000;
        break;
    case 2:
       if(where==1)
           sum1=6000;
       if(where==0)
           sum1=8000;
       if(where==3||where==4||where==5||where==6||where==8)
           sum1=6000;
       if(where==7)
           sum1=18000;
       if(where==9)
           sum1=7000;
       if(where==10)
           sum1=8000;
       break;
    case 3:
       if(where==1)
           sum1=6000;
       if(where==0)
           sum1=8000;
       if(where==2||where==4||where==5||where==6||where==8)
           sum1=6000;
       if(where==7)
           sum1=18800;
       if(where==9)
           sum1=7700;
       if(where==10)
           sum1=8000;
       break;
    case 4:
       if(where==1)
           sum1=6000;
       if(where==0)
           sum1=8000;
       if(where==2||where==3||where==5||where==6||where==8)
           sum1=6000;
       if(where==7)
           sum1=19500;
       if(where==9)
           sum1=7000;
       if(where==10)
           sum1=8000;
       break;
    case 5:
       if(where==1)
           sum1=6000;
       if(where==0)
           sum1=8000;
       if(where==2||where==4||where==3||where==6||where==8)
           sum1=6000;
       if(where==7)
           sum1=19500;
       if(where==9)
           sum1=7000;
       if(where==10)
           sum1=8000;
       break;
    case 6:
       if(where==1)
           sum1=6000;
       if(where==0)
           sum1=8000;
       if(where==2||where==3||where==4||where==5||where==8)
           sum1=6000;
       if(where==7)
           sum1=19500;
       if(where==9)
           sum1=7000;
       if(where==10)
           sum1=8000;
       break;
    case 7:
       if(where==1)
           sum1=19000;
       if(where==0)
           sum1=185000;
       if(where==2||where==3||where==4||where==5||where==8)
           sum1=21000;
       if(where==9)
           sum1=20000;
       if(where==10)
           sum1=21300;
       break;
    case 8:
       if(where==1)
           sum1=6000;
       if(where==0)
           sum1=8000;
       if(where==2||where==3||where==4||where==5||where==6)
           sum1=6000;
       if(where==7)
           sum1=19500;
       if(where==9)
           sum1=7000;
       if(where==10)
           sum1=8000;
       break;
    case 9:
       if(where==1)
           sum1=7000;
       if(where==0)
           sum1=9700;
       if(where==2||where==3||where==4||where==5||where==8)
           sum1=6500;
       if(where==7)
           sum1=20000;
       if(where==10)
           sum1=8500;
       break;
    case 10:
       if(where==1)
           sum1=6700;
       if(where==0)
           sum1=8500;
       if(where==2||where==3||where==4||where==5||where==8)
           sum1=8000;
       if(where==7)
           sum1=22000;
       if(where==9)
           sum1=9000;
       break;
        break;
    }
    if(!(klass))
        sum1=sum1*2;
}
