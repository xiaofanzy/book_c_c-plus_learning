#include <stdio.h>

#define SEC_MIN 60

int main(void)
{
  int sec,min,left;

  printf("Convert seconds to minutes and seconds!\n");
  printf("Enter the number of seconds(<= 0 quit)\n");
  scanf("%d",&sec);
  while (sec >0)
  {
    min = sec / SEC_MIN;
    left = sec % SEC_MIN;
    printf("The %d sec has %d min and %d left",sec,min,left);
    scanf("%d",&sec);
  }
  

  return 0;
}