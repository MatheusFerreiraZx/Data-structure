#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  string name;
  int age;
};

class Student : public Person
{
public:
  string course;
  int registration;
};

int main()
{

  Student student;
  student.name = "João";
  student.age = 30;
  student.course = "Computer Science";
  student.registration = 123456;

  cout << student.name << endl;
  cout << student.age << endl;
  cout << student.course << endl;
  cout << student.registration << endl;

  return 0;
}
