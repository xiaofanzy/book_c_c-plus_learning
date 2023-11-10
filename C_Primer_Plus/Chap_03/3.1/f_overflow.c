#include<stdio.h>

int main(void)
{
  float toobig = 3.14E38 * 100.0f;
  printf("%f is too big\n", toobig);

  return 0;
}