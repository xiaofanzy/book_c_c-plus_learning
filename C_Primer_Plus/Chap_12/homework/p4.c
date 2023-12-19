#include <stdio.h>

void get_times(void);

static int count = 0;

int main(void)
{
  int number;
  printf("Enter the number you want to loop.");
  scanf("%d", &number);
  while (count < number)
  {
      get_times();
  }

  printf("Your loop %d times.\n", count);

  return 0;
}

void get_times(void)
{
  count++;
}
