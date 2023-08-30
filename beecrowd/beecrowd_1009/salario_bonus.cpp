#include <iostream>

using namespace std;

int main()
{
  string nome;
  double salario, vendas, total;

  cin >> nome >> salario >> vendas;

  total = salario + (vendas * 0.15);

  cout.precision(2);

  cout << fixed << "TOTAL = R$ " << total << endl;

  return 0;
}