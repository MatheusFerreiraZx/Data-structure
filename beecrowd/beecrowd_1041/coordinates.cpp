#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void determineQuadrant(double x, double y)
{
  if (x == 0)
  {
    if (y == 0)
    {
      cout << "Origem" << endl;
    }
    else
    {
      cout << "Eixo Y" << endl;
    }
  }
  else if (y == 0)
  {
    cout << "Eixo X" << endl;
  }
  else if (x > 0)
  {
    if (y > 0)
    {
      cout << "Q1" << endl;
    }
    else
    {
      cout << "Q4" << endl;
    }
  }
  else
  {
    if (y > 0)
    {
      cout << "Q2" << endl;
    }
    else
    {
      cout << "Q3" << endl;
    }
  }
}

int main()
{
  string input;
  getline(cin, input);
  istringstream iss(input);
  vector<double> coordinates;
  double coordinate;
  while (iss >> coordinate)
  {
    coordinates.push_back(coordinate);
  }
  if (coordinates.size() == 2)
  {
    double x = coordinates[0];
    double y = coordinates[1];

    determineQuadrant(x, y);
  }

  return 0;
}
