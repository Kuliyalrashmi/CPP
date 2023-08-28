#include <iostream>
#include <stdlib.h>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "constructor of base class" << endl;
    }
    virtual void add(int a, int b)=0;
};
class child : public Base
{
public:
    child()
    {
        cout << "Constructor of child class" << endl;
    }
    void add(int a,int b)
    {
        cout<<a+b+10<<endl;
    }
};
int main()
{
    Base* b1;
    child c1;
    b1=&c1;
    b1->add(9,6);
}
