#include <iostream>

using namespace std;

int main()
{
  double A, B, MEDIA;

  cin >> A >> B;

  MEDIA = ((A * 3.5) + (B * 7.5)) / 11;

  cout.precision(5);

  cout << "MEDIA = " << fixed << MEDIA << endl;

  return 0;
}