#include <iostream>

using namespace std;

int main()
{
  int tempo, horas, minutos, segundos;

  cin >> tempo;

  horas = tempo / 3600;
  minutos = (tempo % 3600) / 60;
  segundos = (tempo % 3600) % 60;

  cout << horas << ":" << minutos << ":" << segundos << endl;

  return 0;
}