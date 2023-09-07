#include <iostream>

using namespace std;

int main()
{
  int tempo, velocidade;
  double distancia, litros;

  cin >> tempo >> velocidade;

  distancia = tempo * velocidade;
  litros = distancia / 12;

  cout.precision(3);
  cout << fixed << litros << endl;

  return 0;
}