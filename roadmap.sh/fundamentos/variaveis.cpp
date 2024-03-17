#include <iostream>
using namespace std;

int main()
{
  int idade = 15;
  const string nome = "João";

  idade = 16;

  cout << idade << " " << nome << endl;
  return 0;
}
