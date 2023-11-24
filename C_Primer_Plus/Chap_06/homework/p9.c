#include <stdio.h>

int main(void)
{
  int f_num,l_num,result = 0;
  int index = 0;

  printf("Enter lower and upper integer limits:");
  
  while ((scanf("%d%d",&f_num,&l_num) == 2) && f_num != l_num)
  {
    for(index = f_num; index <= l_num;index++)
      result += (index * index); //25 36 49 64 81

    printf("The sums of the squares from %d to %d is %d.\n",f_num * f_num, l_num * l_num,result);
    printf("enter nex set of limits:");
  }

  printf("Done.\n");
  

  

  return 0;
}