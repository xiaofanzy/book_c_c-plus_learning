#include <stdio.h>

int main(void)
{
  printf("integer division 5/4 is %d \n", 5 /4);
  printf("integer division 8/4 is %d \n", 8 /4);
  printf("integer division 7/4 is %d \n", 7 /4);

  printf("floating division : 7.0 / 4/0 is %.2f\n", 7.0 / 4.0);
  printf("mixed division : 7.0 / 4 is %.2f\n", 7.0 / 4);

  return 0;
}