#include <stdio.h>

#define ACCRUL_1 0.1
#define ACCRUL_2 0.05
#define MONEY 100
int main(void)
{
  double sum = 100,total = 100;
  int year = 0;

  do
  {
    sum += 100 * ACCRUL_1;  //110
    total += total * 0.05;  //105
    year++;
  } while (sum <= total);
  
  printf("%d years they are equals.\n",year);
  
  return 0;
}