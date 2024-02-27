#include "brass.h"
#include <iostream>

using namespace std;

int main(void)
{
  Brass rick("Rick",200.0,0.5);
  BrassPlus jack("Jack",5500,50,10.00);
  rick.ViewAcct();
  jack.ViewAcct();


  return 0;
}