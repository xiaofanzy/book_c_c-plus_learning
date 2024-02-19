#include <iostream>
#include "support.h"

double status = 0.3;

int main(void)
{

  cout << "global status = " << status << endl;
  update(0.1);
  cout << "After update main function global status = " << status << endl;
  local();
  cout << "After local main function global status = " << status << endl;

  return 0;
}
