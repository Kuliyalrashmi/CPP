#include<iostream>
#include<stdlib.h>
using namespace std;
//Write a C++ program to create a class named 'Bank' with the following data members:
 /*
 Name of depositor
 Address of depositor
 Account Number
 Balance in account

Class 'Bank' has a method for each of the following:
1 - Generate a unique account number for each depositor
For first depositor, account number will be 1001, for second depositor it will be 1002 and so
on
2 - Display information and balance of depositor
3 - Deposit more amount in balance of any depositor
4 - Withdraw some amount from balance deposited
5 - Change address of depositor
After creating the class, do the following operations
1 - Enter the information (name, address, account number, balance) of the depositors.
Number of depositors is to be entered by user.
2 - Print the information of any depositor.
3 - Add some amount to the account of any depositor and then display final information of
that depositor
4 - Remove some amount from the account of any depositor and then display final
information of that depositor
5 - Change the address of any depositor and then display the final information of that
depositor
6 - Randomly repeat these process
 */
class Bank{
    static int newAcc;
    public:
        string name;
        string address;
        int accNum;
        int balance;
        Bank(){
            cout<<"Enter new user's name:";
            cin>>this->name;
            cout<<"Enter user's address";
            cin>>this->address;
            cout<<"Enter the user's balance";
            cin>>this->balance;
            this->accNum=newAcc;
            newAcc++;
        }

        void Display(){
            cout<<"User : "<<this->name<<endl;
            cout<<"User account Number : "<<this->accNum<<endl;
            cout<<"User address : "<<this->address<<endl;
            cout<<"User account balance : "<<this->balance<<endl;
        }

        void addBalance(int newBalance){
            this->balance=this->balance+newBalance;
            cout<<"Balance Updated!"<<endl;
        }

        void withdraw(int amt){
            if(amt>this->balance){
                cout<<"Sorry! Not Enough balance!"<<endl;
                return;
            }
            this->balance-=amt;
            cout<<"Please take your withdrawn money."<<endl;
            cout<<"Remaining Balance = "<<this->balance<<endl;
            cout<<"Thanyou for using our services!"<<endl;
        }

        void changeAddr(){
            string newaddr;
            cout<<"Enter new address:";
            cin>>newaddr;
            this->address=newaddr;
            cout<<"Address changed successfully!"<<endl;
        }
};
int Bank::newAcc = 1001;

int main(){
    int ch;
    int n;
    cout<<"How many depositer's data you want to enter-";
    cin>>n;
    Bank* a[n];
    int i=0;
    do{
        printf("1.Register a new user\n2.Display the information of a user\n3.Add amount to current user account\n4.Withdraw money from current user's account\n5.Change the address of a user\n6.Exit\nEnter your choice - ");
        cin>>ch;
        int currAccNum;
        int newAmt;
        string newaddr;
        switch(ch){
            case 1:
                a[i]=new Bank();
                i++;
                cout<<"Values inserted successfully!"<<endl;
                break;
            case 2:
                cout<<"Enter user's account number";
                cin>>currAccNum;
                for(int j=0;j<n;j++){
                    if(a[j]->accNum==currAccNum){
                        a[j]->Display();
                        break;
                    }
                }
                break;
            case 3:
            cout<<"Enter user's account number";
                cin>>currAccNum;
                for(int j=0;j<n;j++){
                    if(a[j]->accNum==currAccNum){
                        cout<<"Enter the amount of money to add - ";
                        cin>>newAmt;
                        a[j]->addBalance(newAmt);
                        break;
                    }
                }
                break;
            case 4:
                cout<<"Enter user's account number";
                cin>>currAccNum;
                for(int j=0;j<n;j++){
                    if(a[j]->accNum==currAccNum){
                        cout<<"Enter the amount of money to withdraw - ";
                        cin>>newAmt;
                        a[j]->withdraw(newAmt);
                        break;
                    }
                }
                break;
            case 5:
                cout<<"Enter user's account number";
                cin>>currAccNum;
                for(int j=0;j<n;j++){
                    if(a[j]->accNum==currAccNum){
                        cout<<"Enter user's new address - ";
                        cin>>newaddr;
                        a[j]->changeAddr();
                        break;
                    }
                }
                break;
            case 6:
                exit(0);
        }
    }while(1);
    return 0;
}