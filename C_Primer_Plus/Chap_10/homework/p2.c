#include <stdio.h>
void copy_arr(double s[],double purpose[],int size);
void copy_prr(double * s,double * pt,int size);

int main(void)
{
  double source[5] = {1.1,2.2,3.3,4.4,5.5};

  double target1[5],target2[5];

  copy_arr(source,target1,5);
  copy_prr(source,target2,5);
  printf("%.1f.\n",target2[0]);
  printf("%.1f.\n",target1[0]);

  return 0;
}

void copy_arr(double s[],double purpose[],int size)
{
  while (size >= 0)
  {
    purpose[size] = s[size];
    size --;
  }
}

void copy_prr(double * s,double * pt,int size)
{
  for (int i = 0; i < size; i++)
  {
     *pt = *s;
  }
  
}