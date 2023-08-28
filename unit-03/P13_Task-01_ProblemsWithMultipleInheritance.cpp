#include<iostream>
using namespace std;
class mammals
{
    public:
    void display()
    {
        cout<<"I am mammal"<<endl;
    }
};
class MarineAnimals
{
    public:
    void display()
    {
    cout<<"I am a marine Animal"<<endl;
    }
};
class BlueWhale:public MarineAnimals ,public mammals
{
   public:
   void print()
   {
    mammals::display();
    MarineAnimals::display();
   }
   void display()
   {
    cout<<"I belong to both categories mammals as well as marine animals"<<endl;
   } 
};
int main()
{  mammals obj2;
   MarineAnimals obj;
   obj2.display();
   obj.display();
   BlueWhale obj1;
   obj1.display();
   obj1.print(); 
}