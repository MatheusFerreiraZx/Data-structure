#include <iostream>

using namespace std;

int main()
{
  while (true)
  {

    int N, C, D;
    cin >> N >> C >> D;

    if (N == C && C == D && D == 0)
    {
      break;
    }

    int custo_total = N * (C * D);

    cout << custo_total << endl;
  }

  return 0;
}
