//WAP FOR FIBONNACI SERIES upto n terms using recursion
#include<iostream>
using namespace std;
int fibo(int n,int m)
{   int cnt=0;
    if(n==0||n==1)
    {
        return n;
    }
     cnt++;
    if((fibo(n-1)+fibo(n-2))==m)
    {
        cout<<cnt<<" ";
        return;
    }
    return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int n,a,i,m;
    cout<<"enter value of n:";
    cin>>n;
    cout<<"enter element to search:"<<endl;
    cin>>m;
    a=fibo( n, m);
    int arr[n];
    for(i=0;i<n;i++)
    {
    
    }     

}