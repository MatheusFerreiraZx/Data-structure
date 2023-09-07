#include <iostream>

using namespace std;

int main()
{
  int valor, resto, notas[7] = {100, 50, 20, 10, 5, 2, 1};

  cin >> valor;

  cout << valor << endl;

  for (int i = 0; i < 7; i++)
  {
    resto = valor % notas[i];
    cout << valor / notas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
    valor = resto;
  }

  return 0;
}