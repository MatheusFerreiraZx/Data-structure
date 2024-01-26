#include <iostream>
using namespace std;

int main()
{
  int resistencia, dano, ataques = 0;

  cin >> resistencia >> dano;

  while (resistencia > 0)
  {
    if (dano <= 0)
    {
      cout << "F" << endl;
      return 0;
    }

    resistencia -= dano;
    dano--;
    ataques++;
  }

  cout << ataques << endl;

  return 0;
}