#include<iostream>
#include<stdlib.h>
using namespace std;
class bitwise
{
    int a;
    public:
    bitwise(int a)
    {
        this->a=a;
    }
    void show()
    {
        cout<<"The value of a is:"<<a;
    }
    void operator &&(bitwise b)
    {
        a=a&&b.a;
    }
};
int  main()
{
    bitwise b1(2);
    bitwise b2(3);
    b1&&b2;
    b1.show();
}