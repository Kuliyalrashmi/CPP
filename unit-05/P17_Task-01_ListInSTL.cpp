#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
    list<int> mylist = {5,6,3,9,1,8,2,4};
    list<int>::iterator p = mylist.begin();
    while (p != mylist.end())
    {
        cout << *p <<" ";
        p++;
    }
    cout<<endl;
    // Calculating the size of list
    cout << "size:" << mylist.size() << endl;

    // Sorting of A list
    mylist.sort();
    cout <<"List after sorting" << endl;
    for (auto itr = mylist.begin(); itr != mylist.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    //Reverse a list 
    mylist.reverse();
    cout <<"List after Reversing" << endl;
    for (auto itr = mylist.begin(); itr != mylist.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
    // list<int> mylist1, mylist2;
    // for (int i - 0; i < 10; i++)
    // {
    //     mylist1.push_back(i * 2);
    //     mylist2.push_front(i * 3);
    // }
}