#include<iostream>
using namespace std;
class base
{   public:
    base(int i)
    {
      cout<<"constructor of base class is called"<<endl;
    }
};
class A:public base
{  public:
   A(int i):base(i)
   {
    cout<<"constructor of class A is called"<<endl;
   }
};
class B:public base
{  public:
   B(int i):base(i)
   {
    cout<<"constructor of class B is called"<<endl;
   }
};
class C:public A,public B
{  public:
   C(int i):B(i) , A(i)
   {
    cout<<"constructor of class C is called"<<endl;
   }
};
int main()
{
   C obj(30);
   return 0;
}