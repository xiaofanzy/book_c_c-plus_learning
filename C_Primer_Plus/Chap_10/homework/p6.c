#include <stdio.h>

void copy_prr(double * s,double * pt,int size);

int main(void)
{
  double arr[2][2] = {{1.0,2.0},{5.0,3.0}};
  double pt[2];
  double (*purpose)[2];

  purpose = malloc(2 * sizeof(double[2]));

  for (int i = 0; i < 2; i++)
  {
    copy_prr(*(arr + i),*(purpose + i),2);
  }

  for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
            printf("%.4f.\n", purpose[i][j]);
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