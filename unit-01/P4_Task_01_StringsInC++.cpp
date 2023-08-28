#include<string>
#include<iostream>
using namespace std;
//add string to integer
void addinttostring(){
    string s="HELLO";
    int a = 123;
   // cout<<s+a<<endl;
}

bool isPalindrome(string st){
    int s=0,e=(st.length())-1;
    while(s<e){
        if(st[s]!=st[e]){
            return false;
        }
        s++,e--;
    }
    return true;
}
//is string is mutable in c++ - Yes
void checkMutable(string st){
    cout<<&st<<endl;
    st[0]='j';
    cout<<&st<<endl;

}
//compare function
void checkCompare(){
    string a ="Hello";
    string b="hello";
    cout<<a.compare(b)<<endl;
}
//comparing two strings

int compare(string st, string st2){
    if(st==st2){
        return 0;
    }
    else if(st<st2){
        return -1;
    }
    else return 1;
}

//increase character by 1
void changeLetter(string st){
    for(int i=0;i<st.length();i++){
        if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z')){
            if(st[i]=='z') st[i]='a';
            else if(st[i]=='Z') st[i]='A';
            else st[i]=(int )st[i]+1;
        }
        else{
            cout<<"WRONG INPUT!"<<endl;
            return;
        }
    }
    cout<<st<<endl;
}

int main(){
    // string a = "Hello";
    // string s3 = a.append("HELLO");
    // //cout<<s3<<endl;
    // string st="abcdzABCDZ";
    // addinttostring();
    // checkMutable(st);
    // checkCompare();
    // compare(a,st);
    // cout<<isPalindrome(st)<<endl;
    // changeLetter(st);
    return 0;
}