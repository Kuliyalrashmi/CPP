// a. void lessCohesive(){----}
// b. void callByValuesAndAddress(){----}
// c. void inlineFunction(){----}
// d. void recursiveFunction(){----}
#include<iostream>
using namespace std;

void lessCohesive(int a, int b){
    int i=0;
    if(i==0){
        return a+b;
    }
    else{
        return a-b;
    }
}
void inlineFunction(){
    cout<<"This is a inline function."<<endl;
}

void CallByValuesAndAddress(int a, int* ptr){
    a=a+2;
    *ptr= *ptr +1;
}

//Recursive FUnction
void recusiveFunction(int n){
    if(n==9){
        cout<<n<<endl;
        return;
    }
    recusiveFunction(n+1);
}

int main(){
    // int a=lessCohesive(2,3);
    // int *pa=&a;
    // CallByValuesAndAddress(a, pa);
    // cout<<a<<endl;
    // cout<<*pa<<endl;
    // inline void inlineFunction();
    // recusiveFunction(0);
    return 0;
}