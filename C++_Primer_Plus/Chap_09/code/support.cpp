#include <iostream>
#include "support.h"

using namespace std;

void local(void)
{
  double status = 0.8;
  cout << "local stauts = " << status << endl;
  cout << "global status = " << ::status << endl;
  ::status += 0.1;
  cout << ":: after global status = " << ::status << endl;
}

void update(double x)
{
  status += x;
  cout << "After update the status = " << status << endl;
}