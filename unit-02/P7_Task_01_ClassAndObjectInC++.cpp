#include <iostream>
using namespace std;
class Student
{
private:
  string name;
  int rollNumber;
  int phone;
  string address;

public:
  Student(string name, int rollNumber, int phone, string address)
  {
    this->name = name;
    this->rollNumber = rollNumber;
    this->phone = phone;
    this->address = address;
  }
  void display()
  {
    cout << "Name: " << name << endl;
    cout << "rollNumber: " << rollNumber << endl;
    cout << "phone NO: " << phone << endl;
    cout << "address: " << address << endl;
  }
};
int main()
{
  Student obj1("sam", 123, 123456789, "Dehradun");
  Student obj2("John", 123, 12345679, "Rishikesh");
  obj1.display();
  obj2.display();
  return 0;
}