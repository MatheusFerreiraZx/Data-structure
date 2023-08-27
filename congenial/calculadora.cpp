#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  char operation;
  double a, b;

  cin >> operation >> a >> b;

  double result;

  switch (operation)
  {
  case '+':
    result = a + b;
    break;
  case '-':
    result = a - b;
    break;
  case '*':
    result = a * b;
    break;
  case '/':
    result = a / b;
    break;
  default:
    cout << "Operação inválida!" << endl;
    return 1;
  }

  if (operation == '/')
  {
    cout << fixed << setprecision(1) << result << endl;
  }
  else
  {
    cout << result << endl;
  }

  return 0;
}
