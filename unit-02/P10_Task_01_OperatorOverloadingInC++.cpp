#include<iostream>
#include<string>
using namespace std;
 string operator+(string a,int b)
{
    string c=to_string(b);
    return a+c;
}
int main()
{
    string a;
    int b;
    a="hello";
    b=123;
    string s=a+b;
    cout<<"final string is:"<<s<<endl;
}