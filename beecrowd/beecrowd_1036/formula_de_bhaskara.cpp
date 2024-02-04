#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double A, B, C;
  cin >> A >> B >> C;

  double delta = B * B - 4 * A * C;

  if (A == 0 || delta < 0)
  {
    cout << "Impossivel calcular" << endl;
  }
  else
  {
    double x1 = (-B + sqrt(delta)) / (2 * A);
    double x2 = (-B - sqrt(delta)) / (2 * A);

    cout << fixed << setprecision(5);
    cout << "R1 = " << x1 << endl;
    cout << "R2 = " << x2 << endl;
  }

  return 0;
}