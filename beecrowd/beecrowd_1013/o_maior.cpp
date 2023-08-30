#include <iostream>

using namespace std;

int main()
{
  int A, B, C, maiorAB, maiorABC;

  cin >> A >> B >> C;

  maiorAB = (A + B + abs(A - B)) / 2;

  maiorABC = (maiorAB + C + abs(maiorAB - C)) / 2;

  cout << maiorABC << " eh o maior" << endl;

  return 0;
}