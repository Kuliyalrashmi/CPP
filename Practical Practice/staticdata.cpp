#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;   //Static Data Member
    public:
    void setdata()
    {   cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata()
    {   cout<<"the id of employee is:"<<endl;
        cout<<id<<endl;
        cout<<count<<endl;
    }
    static void getcount()   //Static member Function
    { //  cout<<id<<endl;    it will give error because id is not a static data memeber
        cout<<"The value of count is:"<<count<<endl;
    }
};
int employee:: count=75;  //Default value of static data type is zero
int main()
{
    employee E,F,G;
    E.setdata();
    E.getdata();
    F.setdata();
    F.getdata();
    G.setdata();
    G.getdata();
    employee::getcount();
}
