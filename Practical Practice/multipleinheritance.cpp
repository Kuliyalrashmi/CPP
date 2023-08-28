#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"constructor of class A"<<endl;
    }
    void display()
    {
        cout<<"inside display function"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"constructor of class B"<<endl;
    }
};
class C:public B
{
    public:
    C()
    {
        cout<<"constructor of class C"<<endl;
    }
};
int main()
{
    C obj;
    return 0;
}