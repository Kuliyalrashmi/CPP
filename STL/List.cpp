#include<iostream>
#include<list>
using namespace std;
bool even(int x)
{
    return x%2==0;
}
int main()
{
    list<int>l1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int key;
        cin>>key;
        if(key&1)   //Checking whether number is odd or not
        {
            l1.push_front(key);
        }
        else
        {
            l1.push_back(key);
        }
    }


    // cout<<l1.front()<<" "<<l1.back()<<endl;
    // l1.pop_back();
    // l1.pop_front();
    // if(!l1.empty())
    // {
    //     cout<<"List is not empty"<<endl;
    // }



    // l1.remove_if(even);   Callinf of function that will remove all the even numbers from the list



    cout<<"Size of list:"<<l1.size()<<endl;
    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    l1.reverse();  //Reversal of list
    for(auto it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    // l1.remove(2);   remove that element and all the occurences of that element


    //to swap two lists
    // l1.swap(l2);


    //To merge two lists
    //l1.merge(l2);  //values in the l1 will get inserted in sorted order and l2 will get completely empty

    cout<<endl;
}