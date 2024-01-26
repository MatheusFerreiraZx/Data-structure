#include <iostream>
using namespace std;

int main()
{
  int consumo;
  cin >> consumo;

  int valorTotal = 7;

  if (consumo > 10)
  {
    if (consumo <= 30)
    {
      valorTotal += (consumo - 10) * 1;
    }
    else if (consumo <= 100)
    {
      valorTotal += 20 + (consumo - 30) * 2;
    }
    else
    {
      valorTotal += 20 + 140 + (consumo - 100) * 5;
    }
  }

  cout << valorTotal << endl;

  return 0;
}