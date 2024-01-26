#include <iostream>

int main()
{
  int quantidadeTotal = 0;
  int lote;

  while (true)
  {
    std::cin >> lote;

    if (lote == 0)
    {
      break;
    }

    quantidadeTotal += lote;
  }

  std::cout << quantidadeTotal << std::endl;

  return 0;
}
