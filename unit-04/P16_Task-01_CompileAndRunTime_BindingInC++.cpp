#include<iostream>
using namespace std;
    
class Base
{
public:
    virtual void show() { cout<<" In Base \n"; }
    //compile time
    virtual void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
    //compile time (operator overloading)
    void add(int a,float b)
    {
        cout<<a+b<<endl;
    }
};
    
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
    //run time binding
    void add(int a,int b)
    {
        cout<<a+b+5<<endl;
    }
};
    
int main(void)
{
    Base *bp = new Derived;
    // The function call decided at 
    // compile time (compiler sees type
    // of pointer and calls base class
    // function.
    bp->show();  
    bp->add(6, 7);
    return 0;
}