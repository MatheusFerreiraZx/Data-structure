#include <iostream>

using namespace std;

int main()
{
  double raio, volume;

  cin >> raio;

  volume = (4.0 / 3) * 3.14159 * (raio * raio * raio);

  cout.precision(3);

  cout << fixed << "VOLUME = " << volume << endl;

  return 0;
}