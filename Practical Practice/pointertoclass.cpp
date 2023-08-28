#include<iostream>
#include<stdlib.h>
using namespace std;
class shop
{
    int id;
    float price;
    public:
    void setdata(int a,int b)
    {
        id=a;
        price=b;
    }
    void getdata()
    {
       cout<<"id of item is:"<<id<<endl;
       cout<<"price of the item is:"<<price<<endl;
    }
};
int main()
{   int p,q;
    shop *ptr=new shop[2];
    for(int i=0;i<2;i++)
    {
        cout<<"enter the id and price of item "<<i+1<<endl;
        cin>>p>>q;
        (ptr+i)->setdata(p,q);
    }
    for(int i=0;i<2;i++)
    {
       (ptr+i)->getdata();
    }

}