#include <iostream>
using namespace std;
class A
{
public:
    int a, b;
    void display()
    {
        cout << "Inside the display function of A";
    }
};
class B : public A
{
public:
    int c, d;
    void display1()
    {
        cout << "Inside the display function of B";
    }
};
class c : protected B
{
public:
    int e, f;
    void display2()
    {
        cout << "Inside the display function of C";
    }
};
class D : private c
{
public:
    void display3()
    {
        cout << "Inside the display function of d";
    }
};
int main()
{
    A obj;
    B obj1;
    c obj2;
    D obj3;
    obj1.display();
    // obj2.display1();
    // obj3.display2();
    // obj3.display3();//these lines will give error because the class is inherited in protected
                    // and private mode .

}