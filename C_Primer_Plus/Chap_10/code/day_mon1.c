#include <stdio.h>

#define MONTH 12

int main(void)
{
  int month[MONTH] = {31,28,31,30,31,30,31,31,30,31,30,31};

  int index;

  for(index = 0;index < MONTH;index++)
    printf("Month %d has %2d days.\n",index + 1,month[index]);

  return 0;
}