#include <stdio.h>

int main(void)
{
  float num;

  printf("Please enter the float number:");
  scanf("%f", &num);

  printf("float style is %f, exp style is %e", num, num);

  return 0;
}