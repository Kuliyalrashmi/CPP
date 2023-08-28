#include<bits/stdc++.h>
using namespace std;
class point
{
    int arr[2];
    public:
    point(int x=0,int y=0)
    {
        this->arr[0]=x;
        this->arr[1]=y;
    }
    void print()
    {
        cout<<arr[0]<<"x"<<" " <<"+"<<" "<<arr[1]<<"y"<<endl;
    }
    int& operator[](int pos)
    {
        if (pos==0)
        {
            return arr[0];
        }
        else if(pos==1)
        {
            return arr[1];
        }
        else
        {
            cout<<"Out of Bound"<<endl;
            exit(0);
        }
        
    }
};
int main()
{
    point p1(3,4);
    p1.print();
    p1[0] = 12;
    p1[1] = 24;
    p1.print();
    p1[2]=56;
    p1.print();
}
