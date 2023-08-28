#include<iostream>
using namespace std;
int main()
{
int a=10;
int b=12;


//Arithmetic Operators[+,-,*,/]
cout<<a+b<<endl;   
cout<<a-b<<endl;   
cout<<a*b<<endl;  
cout<<a/b<<endl;   


//Remainder 0r Modulus  Operator[%]
cout<<a%b<<endl;  


//Arithmetic Assignment Operators
int c=10;
c+=a;
cout<<a<<endl; 


//Increment And Decrement Operator  [++ , --]
cout<<a++<<endl; 
cout<<a++<<endl; 
cout<<a--<<endl; 
cout<<--a<<endl; 


//logical operators[&&,||,!]
if(a>1 && b<2)     
{
    cout<<"inside if 1"<<endl;  
}
if(a>1||b<2)
{
    cout<<"inside if 2"<<endl; 
}
if(a!=2)
{
    cout<<"inside if 3"<<endl; 
}
//Bitwise operators
cout<< (a&b)<<endl;
cout<< (a|b) <<endl;  
cout<< ~a  <<endl;   
if(a>1&b<2)
{
    cout<<a<<endl;
}


//Conditional or Ternary Operator(  ?   )
int n1=5,n2=10,max;
max=(n1>n2)?n1:n2;
cout<<"Largest number between n1 and n2: "<<max<<endl;


//Relational Operators [<,>,<=,>=]
if(n1>1)
{
    cout<<n1<<endl;
}

return 0;
}