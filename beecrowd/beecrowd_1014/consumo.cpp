#include <iostream>

using namespace std;

int main()
{
  int X;
  double Y, consumo;

  cin >> X >> Y;

  consumo = X / Y;

  cout.precision(3);

  cout << fixed << consumo << " km/l" << endl;

  return 0;
}