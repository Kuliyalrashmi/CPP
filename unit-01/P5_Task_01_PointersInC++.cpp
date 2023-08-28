#include <iostream>
using namespace std;

//1 void Pointers in cpp
void VoidPointer(){
    int a=5;
    void *pa=&a;
}

void PointerIncrement(int* ptr, int arr[]){
    ptr++;
}


void printByPointer(int arr[],int n){
    int* ptr=arr;
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
}

void arrayOfIntPointer(){
    int arr[]={1,2,3};
    int *ptr[3];
    for(int i=0;i<3;i++){
        ptr[i]=&arr[i];
    }
    for(int i=0;i<3;i++){
        cout<<*ptr[i]<<" ";
    }
    cout<<endl;
}

void pointerToPointer(){
    int a=3;
    int *pa=&a;
    int **ppa=&pa;
}
int main(){
    int arr[]={1,2,3,4};
    int *ptr=arr;
    // PointerIncrement(ptr,arr);
    // printByPointer(arr, 4);
    // arrayOfIntPointer();
    // pointerToPointer();
    // VoidPointer();

    return 0;
}