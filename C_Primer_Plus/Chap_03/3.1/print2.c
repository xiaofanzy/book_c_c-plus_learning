#include<stdio.h>

int main(void)
{
  unsigned int un = 3000000000; // system with 32-bit int
  short end = 200; // and 16-bit short

  printf("un = %u and not %d\n", un, un);
  

  return 0;
}