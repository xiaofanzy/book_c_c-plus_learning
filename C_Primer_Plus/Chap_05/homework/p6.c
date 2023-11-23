#include <stdio.h>

int main(void)
{
  int n;
  int sum = 0,count = 0;

  printf("Please enter the num:\n");
  scanf("%d",&n);

  while (count++ < n)
  {
    sum = count * count + sum;
  }
  
  printf("The total is %d", sum);

  return 0;
}