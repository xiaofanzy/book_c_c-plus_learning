#include <iostream>

using namespace std;
double cube(double a);
double recube(double &a);
int main(void)
{
  double x = 3.0;
  cout << cube(x) << " is " << x << endl;
  cout << recube(x) << " is " << x << endl;

  return 0;
}

double cube(double a)
{
  a *= a * a;
  return a;
}

double recube(double &a)
{
  a *= a * a;
  return a;
}