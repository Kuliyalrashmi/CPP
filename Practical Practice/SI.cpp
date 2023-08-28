#include<iostream>
using namespace std;
class interest
{
    float p;
    float r;
    float t;
    float si;
    float amount;
    public:
    void read();
    void calculate();
    void display();
};
void interest::read()
{
    cout<<"enter principle amount:";
    cin>>p;
    cout<<"enter Rate Of Interest:";
    cin>>r;
    cout<<"enter time period:";
    cin>>t;
}
void interest::calculate()
{
    si=(p*r*t)/100;
    amount=si+p;
}
void interest::display()
{
    cout<<"interest is:"<<si<<endl;
    cout<<"Total Amount is:"<<amount<<endl;
}
int main()
{
    interest p1;
    p1.read();
    p1.calculate();
    p1.display();
}

