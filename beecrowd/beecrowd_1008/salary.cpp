#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int num1;
  int num2;
  double num3;

  cin >> num1;
  cin >> num2;
  cin >> num3;

  cout << "NUMBER = " << num1 << endl;

  cout << fixed << setprecision(2);

  cout << "SALARY = U$ " << num2 * num3 << endl;

  return 0;
}
