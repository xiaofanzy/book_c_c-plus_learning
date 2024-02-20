#include <iostream>
#include "namesp.h"
using namespace std;


int main(void)
{
  using debts::Debt;
  using pers::Person;
  Debt golf = {{"Micheal", "Jordan"}, 120.0};
  showDebts(golf);
  return 0;
}