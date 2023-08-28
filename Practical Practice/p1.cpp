#include<iostream>
using namespace std;
class array
{   int a[100];
    int n;
    public:
    void read();
    void multi();
};
void array::read()
{
    cout<<"enter no of elements:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter["<<i+1<<"] element::"<<endl;
        cin>>a[i];
    }
}
void array::multi()
{
    int k,i,temp[100];
    cout<<"enter the no from which you want to multiply:";
    cin>>k;
    for(i=0;i<n;i++)
    {
        temp[i]=k*a[i];
    }
    cout<<"elements after multiplication:"<<endl;
    for(i=0;i<n;i++)
    {
       cout<<temp[i]<<" ";
    }
}
int main()
{
    array obj;
    obj.read();
    obj.multi();
    return 0;
}