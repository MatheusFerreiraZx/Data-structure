#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  float X, Y;
  cin >> X >> Y;

  float resultado = X + Y;

  cout << fixed << setprecision(2);
  cout << resultado << endl;

  return 0;
}
