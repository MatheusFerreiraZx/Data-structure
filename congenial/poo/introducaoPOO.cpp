#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  string name;
  int age;
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