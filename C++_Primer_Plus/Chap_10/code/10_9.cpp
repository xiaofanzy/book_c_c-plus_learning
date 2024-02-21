#include <iostream>
#include "stock10.h"

using namespace std;
const int STK = 3;
int main(void)
{
  Stock st[STK] = {
    Stock("no1",50,10.25),
    Stock("no2",250,11.25),
    Stock("no3",150,11.25)
  };

  for (int i = 0; i < STK; i++)
  {
    st[i].show();
  }

  const Stock * max_st = &st[0];

  for (int i = 1; i < STK; i++)
  {
    //max_st = &max_st->tobe(*(max_st + i));
    max_st = &max_st->tobe(max_st[i]);
  }
  
  cout << "max values is "  << endl;
  max_st->show();
  

  return 0;
}