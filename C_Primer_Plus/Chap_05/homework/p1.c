# include <stdio.h>
#define M_PER_H 60

int main(void)
{
  int min,hour,lmin;

  printf("Please enter the minutes for test:\n");
  printf("Enter the minutes when it <= 0 to quit.\n");
  
  scanf("%d",&min);

  while (min > 0)
  {
    hour = min / M_PER_H;
    lmin = min % M_PER_H;
    printf("%d sec is equal %d hour and %d min\n",min, hour,lmin);
    printf("please enter again:");
    scanf("%d", &min);
  }
  printf("Quit.\n");
  

  return 0;
}