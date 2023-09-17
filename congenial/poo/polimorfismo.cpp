#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  string name;
  int age;

  void WhatDay(int day)
  {
    if (day == 1)
    {
      cout << "Monday" << endl;
    }
    else if (day == 2)
    {
      cout << "Tuesday" << endl;
    }
    else
    {
      throw invalid_argument("Invalid argument");
    }
  };
};

class Student : public Person
{
public:
  string course;
  int registration;

  void WhatDay(int)
  {
    cout << "I don't know" << endl;
  }
};

int main()
{

  Person teacher;
  teacher.name = "João";
  teacher.age = 30;

  cout << teacher.name << endl;
  cout << teacher.age << endl;

  try
  {
    teacher.WhatDay(3);
  }
  catch (const invalid_argument &e)
  {
    cout << "Invalid argument" << endl;
  }

  Student student;
  student.name = "Maria";
  student.age = 20;
  student.course = "Computer Science";
  student.registration = 123456;

  cout << student.name << endl;
  cout << student.age << endl;
  cout << student.course << endl;
  cout << student.registration << endl;

  try
  {
    student.WhatDay(3);
  }
  catch (const invalid_argument &e)
  {
    cout << "Invalid argument" << endl;
  }

  return 0;
}