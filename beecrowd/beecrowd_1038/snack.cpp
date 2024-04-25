#include <iostream>
#include <iomanip>
using namespace std;

float Resultado(int x, int y)
{
  float precos[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
  if (x < 1 || x > 5)
  {
    return -1;
  }
  float total = precos[x] * y;
  return total;
}

int main()
{
  int codigo_produto, quantidade;

  cout << "";
  cin >> codigo_produto;

  cout << "";
  cin >> quantidade;

  if (quantidade <= 0)

  {
    return -1;
  }

  float total = Resultado(codigo_produto, quantidade);

  if (total >= 0)
  {
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;
  }

  return 0;
}
