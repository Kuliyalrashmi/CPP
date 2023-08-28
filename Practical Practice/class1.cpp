#include<iostream>
using namespace std;
class employee
{
 private:
 int a,b,c;
 public:
 int d,e;
 void setdata(int ,int ,int );  //Only Declaration of the function.
 void getdata()
 {
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;  // Defining function inside the class.
    cout<<"value of c is: "<<c<<endl;
    cout<<"value of d is: "<<d<<endl;
    cout<<"value of e is: "<<e<<endl;
 }
};
void employee :: setdata(int a1,int b1,int c1)  //Declaring funcion outside the class
{
  a=a1;
  b=b1;
  c=c1;
}
int main()
{   employee e1;
    // e1.a=90;   this line will give error because a is private data member we cannot access it out of the class.
    e1.d=56;
    e1.e=50;
    e1.setdata(1,2,4);
    e1.getdata();
    return 0;
}