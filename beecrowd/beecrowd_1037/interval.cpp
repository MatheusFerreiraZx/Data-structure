#include <iostream>
using namespace std;

int main()
{
  float numero;

  cout << "";

  cin >> numero;

  if (numero < 0 || numero > 100)
  {
    cout << "Fora de intervalo" << endl;
  }
  else if (numero <= 25)
  {
    cout << "Intervalo [0,25]" << endl;
  }
  else if (numero <= 50)
  {
    cout << "Intervalo (25,50]" << endl;
  }
  else if (numero <= 100)
  {
    cout << "Intervalo (75,100]" << endl;
  }

  return 0;
}