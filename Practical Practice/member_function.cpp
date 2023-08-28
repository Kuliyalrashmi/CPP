#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void chk_binary();
};

void binary::read()
{
    cout << "Enter a binary Number:" << endl;
    cin >> s;
}
void binary::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid binary format" << endl;
            exit(0);
        }
        cout << "it is a binary number" << endl;
        return;
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_binary();
    return 0;
}