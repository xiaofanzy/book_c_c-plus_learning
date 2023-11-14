#include <stdio.h>

int main(void)
{
  int n;
  
  printf("Please enter the integers:");
  scanf("%*d %*d %d",&n);

  printf("The n is %d\n", n);

  return 0;
}