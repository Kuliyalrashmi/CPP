#include<iostream>
using namespace std;
// when we have pointer in our class or pointers as our data members then we overload assignment operator
//when we need deep copy of our data then assignment operator must be overloaded.
// we can also create own copy constructor when overloading assignment operator
//deep copy needed when we have pointers in our class 
//assignment operator must be overloaded by a non static member function only
class Test
{
    int *x;
    public:
    Test(int val=0)
    {
        x=new int(val);
    }
    void setx(int val)
    {
        *x=val;
    }
    void print()
    {
        cout<<*x<<endl;
    }
    ~Test()
    {
        delete x;
    }
    Test& operator=(const Test& rhs)
    {
        if(this!=&rhs)
        {
            *x=*rhs.x;
        }
        return *this; 
    }
};
int main()
{
    Test t1(10);
    Test t2;
    t2=t1;
    t1.setx(20);
    t1.print();
    t2.print();
    return 0;
}