#include <iostream>
#include <stdlib.h>
using namespace std;
class Base
{
    int a, b;

public:
    virtual void add(int a, int b)
    {
        cout << a + b << endl;
    }
    void add(int a, float b)
    {
        cout << a + b << endl;
    }
};
class child : public Base
{
    int c, d;

public:
    using Base::add;
    // overhiding
    add(int a)
    {
        cout << a<<endl;
    }
    void add(int a, int b)
    {
        cout <<"Sum of the numbers is:"<< a + b + 4 << endl;
    }
};
int main()
{
    child obj1;
    Base *ptr;
    ptr=&obj1;
    ptr->add(5,8);
}
