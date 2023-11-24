#include <stdio.h>

int main(void)
{

  int max,min,index;

  printf("Enter the max num and min num:");
  scanf("%d%d",&max, &min);

  for(index = min;index <= max;index++)
  {
    printf("%5d %5d %5d\n",index,index * index, index * index * index);
  }

  return 0;
}