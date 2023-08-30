#include <iostream>

using namespace std;

int main()
{
  double A, B, C;

  cin >> A >> B >> C;

  cout.precision(3);

  cout << fixed << "TRIANGULO: " << (A * C) / 2 << endl;

  cout << fixed << "CIRCULO: " << 3.14159 * (C * C) << endl;

  cout << fixed << "TRAPEZIO: " << ((A + B) * C) / 2 << endl;

  cout << fixed << "QUADRADO: " << B * B << endl;

  cout << fixed << "RETANGULO: " << A * B << endl;

  return 0;
}