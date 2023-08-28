#include <iostream>
#include <cmath>
using namespace std;
void forAllNPrimeOrNot(int n);
void forHalfNPrimeOrNot(int n);
void forSqrtNPrimeOrNot(int n);
void forSqrt1NPrimeOrNot(int n);
int sqrt1(int n);
// void prime5(int n);
int main()
{
    int n, a;
    cout << "enter no:";
    cin >> n;
    forAllNPrimeOrNot(n);
    //forHalfNPrimeOrNot(n);
    //forSqrtNPrimeOrNot(n);
    //forSqrt1NPrimeOrNot(n);
    return 0;
}
void forAllNPrimeOrNot(int n)
{
    int i;
    int b = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            b = 0;
            break;
        }
    }
    if (b)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}
void forSqrtPrimeOrNot(int n)
{
    int i;
    int b = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            b = 0;
            break;
        }
    }
    if (b)
    {
        cout << "number is prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
}
void forHalfNPrimeOrNot(int n)
{
    int i;
    int b = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            b = 0;
            break;
        }
    }
    if (b)
    {
        cout << "number is prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
}
int  sqrt1(int n)
{
    int i = 1;
    int r = 1;
    while (r <= n)
    {
        i++;
        r = i * i;
    }
    return (i - 1);
}
void forSqrt1PrimeOrNot(int n)
{
    int i;
    int b = 1;
    int s = sqrt1(n);
    for (i = 2; i <= s; i++)
    {
        if (n % i == 0)
        {
            b = 0;
            break;
        }
    }
    if (b)
    {
        cout << "no is prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
}