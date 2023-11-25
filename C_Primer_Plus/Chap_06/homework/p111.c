#include <stdio.h>

int main(void)
{
  int times;
  float total = 0.0;
  int sign = 1;

  printf("Please enter the times:\n");
  scanf("%d",&times);

  for(int index = 1.0;index <= times;index++,sign = 0 - sing)
  {
    total += sing * 1.0/index;
  }

  printf("%.2f",total);

  return 0;
}