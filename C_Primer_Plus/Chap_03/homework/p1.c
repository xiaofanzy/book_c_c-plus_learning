#include <stdio.h>
#include <limits.h>   //INT_MAX, INT_MIN
#include <float.h>
int main(void)
{
  //printf("%d , %d",INT_MAX, INT_MIN);
  //printf("%e %e",FLT_MAX, FLT_MIN);
  int i = 2147483647;
  float j = 3.402823e38 * 100.0f;
  printf("%d %d %d\n",i, i + 1, i + 2);
  printf("%e %e %e",j,j + 1, j + 2);
  return 0;
}