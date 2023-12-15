#include <stdio.h>

int main(void)
{
  int n = 10;
  printf("Initially, n = %d\n", n);
  for (int i = 0; i < 4; i++)
  {
    printf("loop %d: ", i);
  }
  printf("n = %d\n", n);
  
}