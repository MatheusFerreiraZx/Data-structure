#include <iostream>
#include <iomanip>

using namespace std;

void imprimirResultados(double salarioInicial, double salarioNovo, double reajusteGanho, int percentualReajuste)
{
  cout << fixed << setprecision(2);
  cout << "Novo salario: " << salarioNovo << endl;
  cout << "Reajuste ganho: " << reajusteGanho << endl;
  cout << "Em percentual: " << percentualReajuste << " %" << endl;
}

void calcularReajuste(double salario)
{
  int percentualReajuste;
  double reajusteGanho, salarioNovo;

  if (salario <= 400.00)
  {
    percentualReajuste = 15;
  }
  else if (salario <= 800.00)
  {
    percentualReajuste = 12;
  }
  else if (salario <= 1200.00)
  {
    percentualReajuste = 10;
  }
  else if (salario <= 2000.00)
  {
    percentualReajuste = 7;
  }
  else
  {
    percentualReajuste = 4;
  }

  reajusteGanho = salario * percentualReajuste / 100.0;
  salarioNovo = salario + reajusteGanho;

  imprimirResultados(salario, salarioNovo, reajusteGanho, percentualReajuste);
}

int main()
{
  double salario;
  cin >> salario;

  calcularReajuste(salario);

  return 0;
}
