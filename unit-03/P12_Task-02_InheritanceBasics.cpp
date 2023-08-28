#include <iostream>
using namespace std;
class ABC
{
public:
    int a;
    ABC()
    {
        a =20;
    }
    void display()
    {
        cout << a << endl;
    }
};
class ABCD : public ABC
{
public:
    void display2()
    {
        display();       // we cannot call method directly inside the sub class it is not a part of the structure of class  we can make data members,member functions and there can exit access modifiers inside class but cannot call method of super class directly to the child class;
        //we can call through constructor and by defining another function.
    }
    // display();
};
int main()
{
    ABCD obj;
    obj.display2();
    //calling parent class method from main
    obj.display();//when display is either in public mode in super class,and also inherited in public mode
    return 0;     
}