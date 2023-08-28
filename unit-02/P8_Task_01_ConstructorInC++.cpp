#include<iostream>
#include<string>
using namespace std;
class Area
{
 private:
  int squareside;
  int lengthrec;
  int widthrec;
  int squareArea=0;
  int rectanArea=0;
  public:
   Area(int squareside)
   {
     this->squareArea=squareside*squareside;
   }
   Area(int lengthrec,int widthrec)
   {
     this->rectanArea=lengthrec*widthrec;
   }
   int getSquareArea()
   {
    return this->squareArea;
   }
   int getRecArea()
   {
    return this->rectanArea;
   }
};
int main()
{
    Area Square(24);
    Area Rectangle(20,10);
    int a=Square.getSquareArea();
    int b=Rectangle.getRecArea();
    cout<<"area of square:"<<a<<endl;
    cout<<"area of Rectangle:"<<b;
    return 0;
}