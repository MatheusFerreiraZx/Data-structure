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
  };

  int main()
  {

    Person teacher;
    teacher.name = "João";
    teacher.age = 30;

    cout << teacher.name << endl;
    cout << teacher.age << endl;

    return 0;
  }
};