#include <iostream>

using namespace std;

int main()
{
  int cod1, cod2, qtd1, qtd2;

  double preco1, preco2, total;

  cin >> cod1 >> qtd1 >> preco1;

  cin >> cod2 >> qtd2 >> preco2;

  total = (qtd1 * preco1) + (qtd2 * preco2);

  cout.precision(2);

  cout << fixed << "VALOR A PAGAR: R$ " << total << endl;

  return 0;
}