#include<iostream>
#include<string>
using namespace std;
class ABC
{
    public:
    static int a;
    int b=6;
    ABC(){
        a++;
    }
    static void display(){
        cout<<a<<endl;
    }
};
int ABC::a=7;
int main(){
    ABC obj1;
    ABC obj2;
    ABC obj3;
    ABC obj4;
    ABC obj5;
    cout<<obj1.b<<endl;
    cout<<obj2.b<<endl;
    cout<<obj3.b<<endl;
    cout<<obj4.b<<endl;
    cout<<obj5.b<<endl;
    ABC::display();
}