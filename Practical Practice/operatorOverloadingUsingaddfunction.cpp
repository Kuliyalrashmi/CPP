// Adding two objects without using operator overloading
#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int a=0,int b=0)
    { 
        this->x=a;
        this->y=b;
    }
    point add(point rhs)
    {
        point p;
        p.x=x+rhs.x;
        p.y=y+rhs.y;
        return p;
    }
    void print()
    {
        cout<<"x:"<<this->x<<endl;
        cout<<"y:"<<this->y<<endl;
    }
};
int main()
{
    point p1(3,4),p2(7,8);
    point p3=p1.add(p2);
    p3.print();
    return 0;
}