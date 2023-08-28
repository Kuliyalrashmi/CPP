#include<iostream>
using namespace std;
class complex
{
  int a,b;
  public:
  void setdata(int v1,int v2)
  {
    a=v1;
    b=v2;
  }
  void setdatabysum(complex o1,complex o2)
  {
    a=o1.a+o2.a;
    b=o1.b+o2.b;
  }
  void display()
  {
    cout<<"your complex number is:"<<a<<"+i"<<b<<endl;
  }
};
int main()
{
    complex obj1;
    complex obj2;
    complex obj3;
    obj1.setdata(1,2);
    obj2.setdata(3,4);
    obj3.setdatabysum(obj1,obj2);
    obj1.display();
    obj2.display();
    obj3.display();

}