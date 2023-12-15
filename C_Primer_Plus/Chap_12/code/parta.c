#include <stdio.h>

int count = 0;

void report_count(void);
extern void accumulate(int k);

int main(void)
{
  int value;
  register int i;

  printf("enter a positive integer (0 to quit.):");
  while (scanf("%d",&value) == 1 && value > 0)
  {
    ++count;
    for(i = value; i >= 0;i--)
      accumulate(i);
    printf("enter a positive integer (0 to quit.).\n");
  }

  report_count();

  return 0;
}

void report_count(void)
{
  printf("Loop executed %d times.\n",count);

}