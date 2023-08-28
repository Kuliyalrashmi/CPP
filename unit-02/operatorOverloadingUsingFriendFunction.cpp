#include<iostream>
using namespace std;
class Testing
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
    friend Testing operator+(Testing,Testing);
};
Testing operator+(Testing test1,Testing test2)
{
    Testing temp;
    temp.a=test1.a+test2.a;
    temp.b=test1.b+test2.b;
    return temp;
}
int main()
{
    Testing t1,t2,t3;
    t1.setdata(1,2);
    t2.setdata(3,4);
    t3=t1+t2;
    t3.display();
    return 0;
}