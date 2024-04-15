#include <iostream>
#include <iomanip>
using namespace std;

float calcularMedia(float nota1, float nota2, float nota3, float nota4)
{
  return (nota1 * 2 + nota2 * 3 + nota3 * 4 + nota4 * 1) / 10.0;
}

int main()
{
  float nota1, nota2, nota3, nota4;

  cin >> nota1 >> nota2 >> nota3 >> nota4;

  float mediaFinal = calcularMedia(nota1, nota2, nota3, nota4);

  cout << fixed << setprecision(1);

  if (mediaFinal >= 7.0)
  {
    cout << "Media: " << mediaFinal << endl;
    cout << "Aluno aprovado." << endl;
  }
  else if (mediaFinal < 5.0)
  {
    cout << "Media: " << mediaFinal << endl;
    cout << "Aluno reprovado." << endl;
  }
  else
  {
    cout << "Media: " << mediaFinal << endl;
    cout << "Aluno em exame." << endl;

    float notaExame;
    cin >> notaExame;

    float novaMedia = (mediaFinal + notaExame) / 2.0;

    cout << "Nota do exame: " << notaExame << endl;

    if (novaMedia >= 5.0)
    {
      cout << "Aluno aprovado." << endl;
    }
    else
    {
      cout << "Aluno reprovado." << endl;
    }
    cout << "Media final: " << novaMedia << endl;
  }

  return 0;
}
