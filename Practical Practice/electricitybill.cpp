#include<iostream>
using namespace std;
class e_bill
{
    int c_no;
    string c_name;
    int units;
    double bill;
    public:
    void setdata()
    {
        cout<<"Enter details of customers:"<<endl;
        cout<<"Enter customer number:"<<endl;
        cin>>c_no;
        cout<<"Enter customer name:"<<endl;
        cin>>c_name;
        cout<<"Enter no of units consumed by customer:"<<endl;
        cin>>units;
    }
    void calculate()
    {
        if(units<=100)
        {
            bill=units*1.20;
        }
        else if(units<=300)
        {
            bill=100*1.20+(units-100)*2;
        }
        else
        {
            bill=100*1.20 + 200*2 +(units-300)*3;
        }
    }
    void display()
    {
        cout<<"Details of customer is: "<<endl;
        cout<<"Custo no:"<<c_no<<endl;
        cout<<"Custo name:"<<c_name<<endl;
        cout<<"Bill is : "<< bill<<endl;
    }
};
int main()
{
    e_bill cust;
    cust.setdata();
    cust.calculate();
    cust.display();
    return 0;
}