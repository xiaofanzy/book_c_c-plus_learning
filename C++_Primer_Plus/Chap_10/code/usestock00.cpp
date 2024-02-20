#include <iostream>
#include "stock00.h"

using namespace std;

int main(void)
{
  Stock stock;
  stock.acquire("No1",50,100.0);
  stock.show();

  stock.buy(100,100.25);
  stock.show();

  stock.sell(100,100.25);
  stock.show();

  stock.update(20);
  stock.show();

  return 0;
}