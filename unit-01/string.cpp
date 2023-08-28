#include <iostream>
#include <string>
// this is program of task 3 i have to include it in task 3
using namespace std;
void ReplaceWithNextletter()
{
    string s1 = "rashmi";
    for (int i = 0; i < s1.length(); i++)
    {
        int ch = s1[i];
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = ch + 1;
            if (ch == 'z')
            {
                s1[i] = ch - 65;
            }
        }
    }
    string s2 = "RASHMI";
    for (int i = 0; i < s2.length(); i++)
    {
        int ch = s2[i];
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = ch + 1;
            if (ch == 'z')
            {
                s2[i] = ch - 97;
            }
        }
    }
    cout << s2 << endl;
}
int main()
{
    // string a="Hello";
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // a[0]='j';
    // cout<<&a<<endl;
    // cout<<a;
    ReplaceWithNextletter();
}