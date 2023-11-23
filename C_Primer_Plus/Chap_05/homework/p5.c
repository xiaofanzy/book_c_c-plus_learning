#include <stdio.h>

int main(void)
{
  int n;
  int count = 0;
  int sum = 0;

  printf("Please enter the num :");
  scanf("%d",&n);

  while (count++ < n)
    sum = count + sum;
  
  printf("The total is %d\n",sum);
  

  return 0;
}