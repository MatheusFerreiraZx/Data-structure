#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
  string name;
  int age;

private:
  string cpf;

  // metodo getter
  string getCPF()
  {
    return cpf;
  }

  // metodo setter
  void setCPF(string cpf)
  {
    this->cpf = cpf;
  }

  int main()
  {

    Person teacher;
    teacher.name = "João";
    teacher.age = 30;

    teacher.cpf = "123.456.789-10";

    cout << teacher.name << endl;
    cout << teacher.age << endl;

    return 0;
  }
};