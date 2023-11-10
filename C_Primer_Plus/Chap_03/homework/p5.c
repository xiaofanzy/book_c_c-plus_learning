#include <stdio.h>

int main(void)
{
  double year_mill = 3.156E7;
  int age;
  double exchange_mill;

  printf("Please enter you age:");
  scanf("%d", &age);

  exchange_mill = age * year_mill;

  printf("Your age %d is %le mills",age, exchange_mill);

  return 0;
}