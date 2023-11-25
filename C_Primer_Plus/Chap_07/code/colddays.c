#include  <stdio.h>

int main(void)
{
  float temperature;
  int all_days = 0;
  int cold_days = 0;

  printf("Enter the list of low temperature;\n");
  while (scanf("%f",&temperature) == 1)
  {
    if (temperature < 0)
    {
      cold_days++;
    }
    all_days++;
  }
  
  if (all_days == 0)
  {
    printf("There is no days.\n");
  }
  else
  {
    printf("%d days is  %.1f%% under the zero.\n",all_days, (float)cold_days / all_days * 100);
  }
  


  return 0;
}