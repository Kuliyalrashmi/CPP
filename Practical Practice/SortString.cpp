#include<iostream>
#include<string.h>
using namespace std;
void sortString()
{
  string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
            }
        }
    }
    cout<<s<<endl;
}
void SortNames()
{
    char temp[20];
    int compare,n;
    cout<<"Enter the no of Names to Enter"<<endl;
    cin>>n;
    char str[n][20];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        compare=strcmp(str[j],str[j+1]);
        if(compare>0)
        {
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
        }

      }
    }
    cout<<"sorted strings are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
}
int main()
{
//   sortString();
//   SortNames();
}