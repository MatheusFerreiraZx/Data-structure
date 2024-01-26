#include <iostream>

using namespace std;

void convertToHMS(int seconds, int &hours, int &minutes, int &remainingSeconds)
{
  hours = seconds / 3600;
  seconds %= 3600;
  minutes = seconds / 60;
  remainingSeconds = seconds % 60;
}

int main()
{
  int seconds;
  cin >> seconds;

  int hours, minutes, remainingSeconds;
  convertToHMS(seconds, hours, minutes, remainingSeconds);

  cout << hours << "h " << minutes << "m " << remainingSeconds << "s" << endl;

  return 0;
}
