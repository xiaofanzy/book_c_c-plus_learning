#include <iostream>
#include <cstring>
#include "arraytp.h"

using namespace std;

int main(void)
{
  ArrayTP<int,10> sums;
  ArrayTP<double,10> aves;
  ArrayTP<ArrayTP<int,5>,10> twoegg;

  for (int i = 0; i < 10; i++)
  {
    sums[i] = 0;
    for (int j = 0; j < 5; j++)
    {
      twoegg[i][j] = (i + 1) * (j + 1);
      sums[i] += twoegg[i][j];
    }
    aves[i] = sums[i] / 10;    
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cout.width(2);
      cout << twoegg[i][j] << " ";
    }
    cout << "sum = " << sums[i] << " and average = " << aves[i] << endl;
  }
  
  return 0;
}