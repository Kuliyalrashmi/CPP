#include <iostream>
using namespace std;
class Base
{
public:
    Base(int i)
    {
        cout << "constructor of Base class is called" << endl;
    }
};
class A : virtual public Base
{
public:
    A(int i) : Base(i)
    {
        cout << "constructor of class A is called" << endl;
    }
};
class B : virtual public Base
{
public:
    B(int i) : Base(i)
    {
        cout << "constructor of class B is called" << endl;
    }
};
class C : public A, public B
{
public:
    C(int i) : B(i), A(i)
    {
        cout << "constructor of class C is called" << endl;
    }
};
int main()
{
    C obj(30);
    return 0;
}