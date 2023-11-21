#include <stdio.h>

int main(void)
{
  int a = 1,b = 1;
  int aplus,bplus;

  aplus = a++;
  bplus = ++b;

  printf("%d %d %d %d\n",a,b,aplus,bplus);

  return 0;
}