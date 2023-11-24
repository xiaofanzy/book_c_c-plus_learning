#include <stdio.h>

float pows(float n,int p);

int main(void)
{
  int pow;
  float num,total;

  printf("Please enter a number and the integer power:");
  
  while (scanf("%f%d",&num,&pow) == 2) 
  {
    total = pows(num,pow);
    printf("%.2f to the power is %.2f",num, total);
    printf("Please enter again:\n");
  }
  
  return 0;
}

float pows(float n,int p)
{
  // 他要给个默认值， must be a true value ,or is error
  float xpows = 1;
  int index;
  for(index = 1;index <= p;index++)
    xpows *= n;
  
  return xpows;
}