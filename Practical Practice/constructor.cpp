#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(void)
    {
        a=0;
        b=0;
        
    }
    void printNumber()
    {
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
    }

};
int main()
{
    complex obj;
    obj.printNumber();
    return 0;
}