#include<iostream>
#include<string>
using namespace std;
class ABC
{
    private:
    int a;
    public:
    ABC(int a)
    {
        this->a=a;
    }
    void operator++();
    void operator++(int);
};
void ABC:: operator++()
{
    ++a;
    cout<<a<<endl;
}
void ABC:: operator++(int)
{
    a++;
    cout<<a<<endl;
}
int main()
{
   ABC obj(100);
   ++obj;
   obj++;
   return 0;
}