#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int numeroInscricao, n1, n2, n3, n4, n5;
  cin >> numeroInscricao >> n1 >> n2 >> n3 >> n4 >> n5;

  double media = (n1 + n2 + n3 + n4 + n5) / 5.0;

  cout << numeroInscricao << " " << fixed << setprecision(1) << media << endl;

  return 0;
}
