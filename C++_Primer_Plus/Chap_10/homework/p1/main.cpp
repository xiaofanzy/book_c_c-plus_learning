#include <iostream>
#include "p1.h"

using namespace std;

int main(void)
{
  Bank bank("zhongguo","0001",50.0);
  bank.show(bank);
  bank.addMoney(50.0);
  bank.subMoney(20.0);
  bank.show(bank);


  return 0;
}