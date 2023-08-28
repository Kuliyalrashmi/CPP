#include<iostream>
using namespace std;
class Account
{
    public:
    float salary=50;
};
class Employee:public Account
{
    public:
    float bonus=6;
    void display()
    {
      cout<<"salary:"<<salary;
    }
};
int main()
{
  Employee obj;
  cout<<"Bonus:"<<obj.bonus<<endl;
  obj.display();
  return 0; 
}