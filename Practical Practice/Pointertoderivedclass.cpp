#include<iostream>
using namespace std;
class Base
{
    public:
    int var_base;
    void display()
    {
        cout<<"Displaying Base class:"<<var_base<<endl;
    }
  
};
class Derived:public Base
{
    public:
    int var_Derived;
    void display()
    {
        cout<<"Displaying Derived class:"<<var_Derived<<endl;
    }
};
int main()
{
   Base*ptr_Base;
   Base objBase;
   Derived objDerived;
   ptr_Base=&objDerived;//pointing to Derived class
   ptr_Base->var_base=45;
  //ptr_Base->var_Derived=50; It will throw an error because we cant access child class member to base class pointer
   ptr_Base->display();
   return 0;
}