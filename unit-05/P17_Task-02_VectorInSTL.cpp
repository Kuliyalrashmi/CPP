#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>g1;
    //Inserting Elements into Vector
    for(int i=1;i<=5;i++)
    {
        g1.push_back(i);
    }
    //Iterating a vector
    cout<<"Output of begin and end: ";
    for(auto i=g1.begin();i!=g1.end();++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Output of rbegin and rend: ";
    for(auto ir=g1.rbegin();ir!=g1.rend();++ir)
    {
        cout<<*ir<<" ";
    }
    cout<<endl;
    //Capacity,Size and MAx Size of Vector
    cout<<"Size: "<<g1.size()<<endl;
    cout<<"Capacity: "<<g1.capacity()<<endl;
    cout<<"Max-Size: "<<g1.max_size()<<endl;

    //Resize vector size to 4
    g1.resize(4);
    cout<<"Size "<<g1.size()<<endl;
    cout<<"Output after resizing"<<endl;
    for(auto i=g1.begin();i!=g1.end();++i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    //Checking if Vector is empty or not
    if(g1.empty()==false)
    {
        cout<<"Vector is not empty"<<endl;
    }
    else
    {
        cout<<"Vector is empty"<<endl; 
    }
    return 0;
}