#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void setdata(int x)
    {
        this->a=x;
    }
    void operator &&(A obj)
    {
       a=a&&obj.a ;
    }
    void show()
    {
        cout<<a;
    }
};
int main()
{
    A obj1,obj2;
    obj1.setdata(1);
    obj2.setdata(2);
    obj1&&obj2;
    obj1.show();
}