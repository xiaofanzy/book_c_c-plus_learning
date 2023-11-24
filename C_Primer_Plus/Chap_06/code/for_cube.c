#include <stdio.h>

int main(void)
{
  int num;

  for ( num = 0; num < 7; num++)
  {
    printf("%5d %5d\n",num, num * num * num);
  }

  return 0;
}