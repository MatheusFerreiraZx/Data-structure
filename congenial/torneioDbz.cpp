#include <iostream>

using namespace std;

int main()
{
  int N1, N2, N3, N4, N5;
  cin >> N1 >> N2 >> N3 >> N4 >> N5;

  int ki_total = N1 + N2 + N3 + N4 + N5;

  if (ki_total > 5000)
  {
    cout << "Acesso proibido" << endl;
  }
  else
  {
    cout << "Acesso liberado" << endl;
  }

  return 0;
}
