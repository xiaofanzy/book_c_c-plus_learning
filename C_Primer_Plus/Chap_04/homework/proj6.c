#include <stdio.h>
#include <float.h>
int main(void)
{
  double d_num = 1.0 / 3.0;
  float f_num = 1.0 / 3.0;

  printf("%.4f\n",d_num);
  printf("%.12f\n", f_num);
  printf("%.16f\n",f_num);
  printf("%d %d\n",FLT_DIG,DBL_DIG);


  return 0;
}