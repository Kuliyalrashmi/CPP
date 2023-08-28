#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int x = 50;
    int y;
    double z=0;
    try
    {   cout<<"Enter the value of y:"<<endl;
        cin>>y;
        if (y == 0)
        {
            throw runtime_error("Math Error: Attempted to divide by zero\n");
        }
        z = x / y;
        cout<<z<<endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception Occurred!\n"<< e.what();
        cout << "enter y:";
        cin >> y;
        z = x / y;
        cout << z;
    }
}
