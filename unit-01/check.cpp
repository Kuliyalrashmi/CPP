#include <iostream>
#include <string>
using namespace std;
class Telcall
{
private:
    int phon;
    string sname;
    int n;
    float amt;

public:
    Telcall(int phon, string sname, int n)
    {
        this->phon = phon;
        this->sname = sname;
        this->n = n;
        this->amt = 0;
    }
    void compute()
    {
        if (n > 300)
        {
            n = n - 300;
            this->amt = amt + n * 1.5;
            n = 300;
        }
        if (n > 201 && n <= 300)
        {
            n = n - 200;
            this->amt = amt + n * 1.2;
            n = 200;
        }
        if (n > 101 && n <= 200)
        {
            n = n - 100;
            this->amt = amt + n * 1;
            n = 100;
        }

        this->amt = amt + 500;
    }
    void display()
    {
        cout << "amount is:" << amt;
    }
};
int main()
{
    int n;
    cout << "enter the numbers of calls made:" << endl;
    cin >> n;
    Telcall obj(9374747, "rashmi", n);
    obj.compute();
    obj.display();
    return 0;
}