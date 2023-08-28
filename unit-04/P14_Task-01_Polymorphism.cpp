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
    int add(int a, int b)
    {
        return (a + b);
    }
    float  add(int a,float b)
    {
     return (a+b);
    }
};
class child : public Base
{
public:
    child()
    {
        cout << "Constructor of child class" << endl;
    }
    float add(int a,float b)
    {
        return (a+b+10);
    }
};
int main()
{
    child obj2;
    int b=obj2.add(4,5.7);
    cout<<b<<endl;
}
