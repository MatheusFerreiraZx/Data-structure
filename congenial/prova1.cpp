#include <iostream>
#include <vector>

int main()
{

  int N;
  std::cin >> N;

  std::vector<int> sequencia(N);

  for (int i = 0; i < N; ++i)
  {
    std::cin >> sequencia[i];
  }

  int tamanho_atual = 1;
  int tamanho_maximo = 1;

  for (int i = 1; i < N; ++i)
  {
    if (sequencia[i] > sequencia[i - 1])
    {
      tamanho_atual++;
    }
    else
    {
      tamanho_atual = 1;
    }

    if (tamanho_atual > tamanho_maximo)
    {
      tamanho_maximo = tamanho_atual;
    }
  }

  std::cout << tamanho_maximo << std::endl;

  return 0;
}
