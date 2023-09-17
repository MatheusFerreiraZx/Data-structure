#include <iostream>
#include <string>
#include <stdexcept>

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

    return 0;
  }
};
