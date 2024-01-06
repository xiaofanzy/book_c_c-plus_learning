#include <iostream>

int main(void)
{
  using namespace std;

  double *p3 = new double[3];
  p3[0] = 0.2;
  p3[1] = 0.1;
  p3[2] = 0.4;

  cout << "now p3[0] = " << p3 << endl;

  p3 = p3 + 1;
  cout << "now " << *p3 << endl;

  p3 += 1;
  cout <<  "now " << *p3 << endl;
  p3 = p3 -2;
  delete [] p3;

  return 0;
}