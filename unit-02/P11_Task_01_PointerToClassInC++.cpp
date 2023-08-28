#include<iostream>
#include<string>
using namespace std;
class ABC
{
    public:
    int a,b;
    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
};
int main()
{
    ABC *ptr=new ABC;
    ptr->setdata(50,100);
    cout<<"value of a:"<<(*ptr).a<<endl;
    cout<<"value of b:"<<ptr->b<<endl;
}