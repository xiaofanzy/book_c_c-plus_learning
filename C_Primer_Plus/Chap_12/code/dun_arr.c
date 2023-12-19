#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double *pd;
  int max;
  int number;
  double * ptd;
  int i;

  puts("what is the maximum number of type double entries?");
  scanf("%d", &max);
  ptd = (double *) malloc(max * sizeof(double));

  if (ptd == NULL)
  {
    puts("Memory allocation failed. goolbye.");
    exit(EXIT_FAILURE);
  }

  puts("Enter the value:");
  while (i < max && scanf("%lf",&ptd[i]) == 1)
  {
    ++i;
  }
  
  printf("Here are %d entries.\n", number = i);
  
  puts("enter the values: ");
  for (i = 0; i < number; i++)
  {
    printf("%7.2f",ptd[i]);
    if (i % 7 == 6)
    {
      putchar('\n');
    }
  }

  if (i % 7 != 0)
  {
    putchar('\n');
  }

  free(ptd);
  
  return 0;

}