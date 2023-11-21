#include <stdio.h>

int main(void)
{
  int n = 0;
  size_t insize;

  insize = sizeof(int);
  printf("n = %d,has %zd bytes,all ints have %zd bytes.\n",n,sizeof(n),insize);

  return 0;
}