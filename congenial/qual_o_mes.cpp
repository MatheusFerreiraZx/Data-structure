#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<int, string> meses;

  meses[1] = "Janeiro";
  meses[2] = "Fevereiro";
  meses[3] = "Março";
  meses[4] = "Abril";
  meses[5] = "Maio";
  meses[6] = "Junho";
  meses[7] = "Julho";
  meses[8] = "Agosto";
  meses[9] = "Setembro";
  meses[10] = "Outubro";
  meses[11] = "Novembro";
  meses[12] = "Dezembro";

  int mes;
  cin >> mes;

  if (mes >= 1 && mes <= 12)
  {
    cout << meses[mes] << endl;
  }
  else
  {
    cout << "Valor inválido. Digite um número entre 1 e 12." << endl;
  }

  return 0;
}
