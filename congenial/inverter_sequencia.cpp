#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<string> matriculas(n);
  for (int i = 0; i < n; i++)
  {
    cin >> matriculas[i];
  }

  for (int i = n - 1; i >= 0; i--)
  {
    cout << matriculas[i] << " ";
  }
  cout << endl;

  return 0;
}