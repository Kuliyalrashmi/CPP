#include<iostream>
using namespace std;
class ABC
{
    public:
    ABC()
    {
        cout<<"constructor of  base class"<<endl;
    }
    void add(int a,int b)
    {
        cout<<"add method of base class:"<<a+b<<endl;
    }
    virtual ~ABC()
    {
        cout<<"Destructor of base class"<<endl;
    }
};
class ABCD:public ABC
{
    public:
    ABCD()
    {
        cout<<"constructor of child class"<<endl;
    }
    void add(int a,int b)
    {
        cout<<"add method of base class:"<<a+b+10<<endl;
    }
    ~ABCD()
    {
        cout<<"Destructor of child class"<<endl;
    }
};
int main()
{
 ABCD*b=new ABCD();
 ABC*p;
 p=b;
 delete p;
 return 0;
}