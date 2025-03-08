#include <iostream>
using namespace std;

class pprice ;
class moshtari{
string name,family;
long code;
public:
    pprice p();
    void get(){cout<<"Please enter name/family/code:"; cin>>name>>family>>code;}
    void put(){cout<<name<<family<<code;}
    friend pprice;
};

class pprice{
long price [10];
public:
    void input(){
        for ( int i = 0 ; i < 10 ; i ++)
        {
         cout<<"Please enter the price of the last 10 purchases:";
         cin>>price[i];
        }
}
    void output(){cout<<price;}
    friend moshtari;
    void maximum();
};



int main()
{
    moshtari m[3];
    for(int i=0;i<3;i++)
    {
        m[i].get;
        m[i].put;
        x=m[i].p;

        cout<< m[i].name << m[i].family << m[i].code << x;

    }
 return 0;
}

void maximu()
{
    temp=0;
    for(int int i=0;i<l;i++)
    {
        cout<< m[i];
        if(m[i]>m[i]+1)
        {
            temp=m[i]+1;
            m[i]+1=m[i];
            m[i]=temp;
            x=i;
        }
    }
    return x;
}
