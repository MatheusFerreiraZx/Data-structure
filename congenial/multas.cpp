#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  float mph;
  const float conversion_factor = 0.62137;

  cin >> mph;

  float kph = mph / conversion_factor;

  cout << fixed << setprecision(2);

  cout << kph << endl;

  return 0;
}
