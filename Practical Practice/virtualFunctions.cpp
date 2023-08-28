#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Base
{
    public:
    int var_base;
    virtual void display()  //now compiler will not access this function(it comes under Run time Polymorphism)
    {
        cout<<"Displaying Base class:"<<var_base<<endl;
    }
    //virtual function is used to alter the default behaviour of the function or class objects;
  
};
class Derived:public Base
{
    public:
    int var_Derived;
    //function overriding (Run time polymorphism)
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