#include<iostream>
#include<stdlib.h>
using namespace std;
class Number{
    int a;
    public:
    Number()
    {
        this->a=0;
    };
    Number(int num)
    {
      this->a=num;
    }
    Number(Number&obj)
    {
        this->a=obj.a;
    }
    void display()
    {
        cout<<"The no for this object is:"<<this->a<<endl;
    }

};
int main()
{ 
    Number x(60),y,z;
    x.display();
    y.display();
    z.display();
    Number Z1(x);//When there is no copy ConsTructor is there then Compiler Creates Its Own Copy Constructor
    Z1.display();

    return 0;
}