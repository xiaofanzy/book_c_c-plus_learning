#include <iostream>

using namespace std;

inline double square(double x){return x * x;}

int main(void)
{
  double a,b;
  double c = 13.0;

  a = square(5.0);
  b = square(4.5 + 7.5);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << square(c++) << endl;

  return 0;
}