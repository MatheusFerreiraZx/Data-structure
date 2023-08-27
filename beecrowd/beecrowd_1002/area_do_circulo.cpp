#include <iostream>

using namespace std;

int main()
{
  double raio;
  double area;
  double n;

  n = 3.14159;

  cin >> raio;

  area = n * (raio * raio);

  cout.precision(4);

  cout << "A=" << fixed << area << endl;

  return 0;
}