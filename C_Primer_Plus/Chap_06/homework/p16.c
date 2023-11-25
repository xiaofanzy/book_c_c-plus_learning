#include <stdio.h>

int main(void)
{
  double monery = 1000000;
  int year= 0;

  while (monery > 0)
  {
    monery += 1000000 * 0.08;
    monery -= 100000;
    year++;
  }

  printf("%d years ,has no money;\n", year);
  


  return 0;
}