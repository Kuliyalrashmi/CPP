#include<iostream>
#include<string>
using namespace std;
class Student
{ 
    string name;
    int age;
    char section;
    int marks;
    string college;
    public:
    static int total;
    void setdata(string name,int age,char section,int marks,string college)
   {
    this->name=name;
    this->age=age;
    this->section=section;
    this->marks=marks;
    this->college=college;
    total=total+this->marks;
   }
   int getmarks()
   {
    return this->marks;
   }
   static void display()
   {
      cout<<total<<endl;
   }
};
int Student::total=0;
int main()
{
Student obj[4];
obj[0].setdata("Rashmi",19,'A',85,"GEHU");
obj[1].setdata("abc",19,'A',90,"GEHU");
obj[2].setdata("def",19,'A',70,"GEHU");
obj[3].setdata("ghi",19,'A',60,"GEHU");
// int total=obj[0].getmarks()+obj[1].getmarks()+obj[2].getmarks()+obj[3].getmarks();
// cout<<total<<endl;
Student::display();
}