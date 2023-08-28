#include<bits/stdc++.h>
using namespace std;
class complex{
  int a;
  int b;
  public:
  void setdata(int a,int b)
  {
    this->a=a;
    this->b=b;
  }
  void display();
  friend complex operator+(complex,complex);
  complex operator++();
  complex operator++(int x);
};
complex operator+(complex r,complex p)
{
    complex temp;
    temp.a=r.a+p.a;
    temp.b=r.b+p.b;
    return temp;
}
complex complex::operator++()
{
    this->a=a+1;
    this->b=b+1;
    return *this;
}
complex complex::operator++(int x)
{
    this->a=a++;
    this->b=b++;
    return *this;
}
void complex::display()
{
    cout<<a<<"+"<<"i"<<b<<endl;
}
int main()
{
    complex no1;
    complex no2;
    no1.setdata(3,6);
    no2.setdata(7,8);
    no1.display();
    no2.display();
    complex.no3;
    no3=no1+no2;
    no3.display();
    no1++;
    no1.display();
}