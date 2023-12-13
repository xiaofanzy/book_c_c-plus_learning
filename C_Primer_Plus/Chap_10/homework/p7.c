#include <stdio.h>

void copy_prr(double * s,double * pt,int size);

int main(void)
{
  double pt[7] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0};
  double *copy;
  copy_prr(pt + 2,copy,3);

  for (int i = 0; i < 3; i++)
  {
    printf("%.3f",*(copy + i));
  }
  

  return 0;
}

void copy_prr(double * s,double * pt,int size)
{
  for (int i = 0; i < size; i++)
  {
     *(pt + i) = *(s + i);
  }
  
}