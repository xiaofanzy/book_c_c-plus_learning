#include <stdio.h>

int main(void)
{
  float a,b;

  scanf("%f %f",&a, &b);

  printf("a. the input %0.1f or %0.1e\n", a,a);
  printf("b.the input os %+0.3f or %0.3E\n",b,b);

  return 0;
}