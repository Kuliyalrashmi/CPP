//Q1.WAP in C++ to delete an element from the array
//Q2.WAP in C++ to MUltiply two matrices.
//Q3.WAP in c++ for given an array A[] and a number x ,check for pair in A[] with sum as x using counter array with no adjacent element;
//max min using counter array
//left shift and right shift
#include<iostream>
#include<climits>
using namespace std;
void delete1()
{   int n=8;
    int arr[n]={1,2,3,4,5,6,7,8};
    int k=4;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {  
            while(i<n)
            {
               arr[i]=arr[i+1]; 
               i++;
            }
            arr[i-1]=0;
            break;
        } 
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void delete2()
{    int n=8;
     int k=4;
    int arr[n]={1,2,3,4,5,6,7,8};
    int j=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==k)
       {
        continue;
       }
       else
       {
        arr[j++]=arr[i];
       }
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void delete3()
{
    int n=8,j=0;
    int arr[n]={1,2,3,4,5,6,7,8};
    int arr2[n-1];
    int k=4;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {  
            continue;
        }
        else
        {
           arr2[j++]=arr[i];
        }
    }
     for(int i=0;i<n-1;i++)
    {
        cout<<arr2[i]<<" ";
    }

}
void reverseMatricsDisplay()
{
    int arr[3][3];
    int counter=9;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=counter;
            counter--;
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }       
}

//PROGRAM TO FIND THE PAIR OF ELEMENTS OF GIVEN SUM
void pairSum1() //for sorted array
{   int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; 
    int x=6;
    int a=0;
    int b=9;
    while(a<=b)
    {    
        if(arr[a]+arr[b]==x)
        {
            cout<<arr[a]<<","<<arr[b]<<endl;;
            a++;
            b--;
        }
        if(arr[a]+arr[b]>x)
        {
            b--;
        }
        if(arr[a]+arr[b]<x)
        {
            a++;
        }
    }    
}
void pairsum2() //Using Hashing
{
    int arr[10]={1,2,3,4,5,6,7,7,9,10};
    int m=INT_MIN;
    int sum=9,i;
    for(i=0;i<10;i++)
    {
         m=max(m,arr[i]);
    }
    int crr[m]={0};
    for(i=0;i<10;i++)
    {
        crr[arr[i]]++;
    }
    for(i=0;i<10;i++)
    {
    if(crr[sum-arr[i]]>=1 && arr[i]!=sum-arr[i])
    {
        cout<<arr[i]<<" "<<sum-arr[i]<<endl;
    }
    crr[arr[i]]--;
    }
}
void pairsum1() //Brute Force(T.C=O(n^2))
{
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; 
    int sum=6;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(arr[i]+arr[j]==sum)
         {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
         }
        }
    }
}
//PROGRAM TO ROTATE AN ARRAY(LEFT SHIFT) 
void reverse(int *p,int in,int fin)
{
    int i,temp;
    while(in<fin)
    {
        temp=*(p+in);
        *(p+in)=*(p+fin);
        *(p+fin)=temp;
        in++;
        fin--;
    }
}
void rotatearray()
{
    int n;
    printf("Enter elemnts :");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int d;
    printf("No of rotation :");
    scanf("%d",&d);
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


//PROGRAM TO MULTIPLY TWO MATRICES
void multiplyTwoMatrics()
{   int r1,r2,c1,c2;
    cout<<"enter no of rows and columns of 1 matrics:"<<endl;
    cin>>r1>>c1;
    cout<<"enter no of rows and columns of 2 matrics:"<<endl;
    cin>>r2>>c2;
    int mat1[r1][c1],mat2[r2][c2],i,j,k,res[r1][c2];
    if(c1!=r1)
    {
      cout<<"multiplication not possible";
      exit(0);
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"enter elements of second matrics"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>mat2[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {  
        for(j=0;j<c2;j++)
        {   int sum=0;
            for(k=0;k<c1;k++)
            {   
                sum=sum+mat1[i][k]*mat2[k][j];
                res[i][j]=sum;
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
void multiplyTwoMatrics1()
{ 
    int mat1[3][3],mat2[3][3],i,j,k,res[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"enter elements of second matrics"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>mat2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {  
        for(j=0;j<3;j++)
        {   int sum=0;
            for(k=0;k<3;k++)
            {   
                sum=sum+mat1[i][k]*mat2[k][j];
                res[i][j]=sum;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}


//PROGRAM TO FIND ELEMENT WHICH IS IN MAJORITY
void majorityElement()
{
    int arr[10]={1,2,3,1,4,4,4,9,6,6};
    int max=arr[0],i;
    static int index=0;
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int crr[max+1]={0};
    for(i=0;i<max+1;i++)
    {
        crr[arr[i]]++;
    }
    cout<<"elements which is in majority:"<<" ";
    int m=crr[0];
    for(i=0;i<max+1;i++)
    {
        if(crr[i]>m)
        {
            m=crr[i];
            index=i;
        }
    }
    cout<<index<<endl;
}
//PROGRAM TO FIND DUPLICATE ELEMENTS IN AN ARRAY
void duplicateElement()
{
    int arr[10]={1,2,3,1,4,4,4,9,6,6};
    int max=arr[0],i,index=0;
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int crr[max+1]={0};
    for(i=0;i<10;i++)
    {
        crr[arr[i]]++;
    }
    cout<<"Duplicate elements are"<<" ";
    int m=crr[0];
    for(i=0;i<max+1;i++)
    {
        if(crr[i]>1)
        {
            cout<<i<<endl;
        }
    }
}

//PROGRAM TO FIND THE PAIR OF ELEMENT WHOSE SUM IS CLOSEST TO ZERO
void closestSumToZero()
{
    int arr[10]={1,2,3,4,7,6,2,1,9,4};
    int min_sum=arr[0]+arr[1];
    int sum=0,i,j,ind1,ind2;
    int m=arr[0];
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            sum=arr[i]+arr[j];
            if(abs(sum)<abs(min_sum)&&i!=j)
            {
                min_sum=sum;
                ind1=i;
                ind2=j;
            }
        }
    }
         cout<<"("<<arr[ind1]<<","<<arr[ind2]<<")";
}
void MaxSumNotAdja()
{

    int arr[10]={1,2,3,4,7,6,2,1,9,4};
    int max_sum=arr[0]+arr[1];
    int sum=0,i,j,ind1,ind2;
    int m=arr[0];
    int sm=arr[0];
    ind1=0;
    for(i=0;i<10;i++)
    {
       if(arr[i]>m)
       {
        m=arr[i];
        ind1=i;
       }
    }
    sum=sum+m;
    m=INT_MIN;
    for(i=0;i<10;i++)
    {
       if(i-1==ind1||i+1==ind1||i==ind1) 
       {
         continue;
       }
       else{
       if(arr[i]>m)
       {
        m = arr[i];
        ind2=i;}
       }
    }
     cout<<"("<<arr[ind1]<<","<<arr[ind2]<<")";
}
void findMedianTwoSorted(){ 
        int a[]={1,2,3,4,5};
        int n=(sizeof(a)/sizeof(a[0]));
        int b[]={6,7,9,10,12};
        int m=(sizeof(b)/sizeof(b[0]));
        int c[n+m];
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                c[k++]=a[i++];
            }
            else{
                c[k++]=b[j++];
            }
        }
        while(i<n){
            c[k++]=a[i++];
        }
        while(j<m){
            c[k++]=b[j++];
        }
        int mid=n+m/2;
        float ans;
        if(n+m%2==0){
            ans=(c[mid-1]+c[mid])/2;
            cout<<"median:"<<ans;
        }
        else{
            ans=(c[mid])/2;
            cout<<"median:"<<ans;

        }
        
    }
int main()
{
//delete1();
//delete2();
// delete3();
// reverseMatricsDisplay();
//  multiplyTwoMatrics();
//pairsum2();
//majorityElement();
// closestSumToZero();
//MaxSumNotAdja();
// findMedianTwoSorted();
//rotatearray();
}