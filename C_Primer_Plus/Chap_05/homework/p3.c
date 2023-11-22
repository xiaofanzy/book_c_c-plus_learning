#include <stdio.h>
#define D_PER_W 7

int main(void)
{
  int days,weeks,ldays;

  printf("please enter the total days.\n");
  scanf("%d",&days);

  while (days >= 0)
  {
    weeks = days / D_PER_W;
    ldays = days % D_PER_W;

    printf("%d days are %d weeks, %d days.\n",days,weeks, ldays);
    printf("Please enter again:\n");
    scanf("%d",&days);
  }
  
  return 0;
}