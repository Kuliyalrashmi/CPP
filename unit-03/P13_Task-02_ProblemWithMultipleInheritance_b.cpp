#include<iostream>
using namespace std;
class Base
{   public:
    Base()
    {
      cout<<"constructor of Base class is called"<<endl;
    }
};
class A: virtual public Base
{  public:
   A()
   {
    cout<<"constructor of class A is called"<<endl;
   }
};
class B: virtual public Base
{  public:
   B()
   {
    cout<<"constructor of class B is called"<<endl;
   }
};
class C:public A ,public B
{  public:
   C()
   {
    cout<<"constructor of class C is called"<<endl;
   }
};
int main()
{
   C obj();
   return 0;
}