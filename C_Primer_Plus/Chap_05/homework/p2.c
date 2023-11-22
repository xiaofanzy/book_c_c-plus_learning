#include <stdio.h>

int main(void)
{
  int input,times = 0;

  printf("Please enter the num:");
  scanf("%d",&input);

  while (times++ <= 10)
  {
    printf("%5d",input++);
  }
  printf("\n");
  


  return 0;
}