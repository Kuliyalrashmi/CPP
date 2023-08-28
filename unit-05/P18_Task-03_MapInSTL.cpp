#include<iostream>
#include<maps>
using namespace std;
int main()
{
    map<int,int>map1;
    //insert elements in random order:pair
    //insert(keyvalue,mapvalue)
    map1.insert(pair<int,int>(1,40));
    map1.insert(pair<int,int>(2,30));
    map1.insert(pair<int,int>(3,60));
    map1.insert(pair<int,int>(4,20));
    map1.insert(pair<int,int>(5,50));
}