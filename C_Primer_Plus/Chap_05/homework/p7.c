#include <stdio.h>

float getCube(float n);

int main(void)
{
  float num;
  float total = 0.0;

  printf("Enter the num:");
  scanf("%f",&num);

  total = getCube(num);

  printf("the total is %.2f",total);

  return 0;
}

float getCube(float n)
{
  return n * n * n;
}