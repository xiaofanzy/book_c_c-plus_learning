#include <stdio.h>

static int total = 0;
extern int count;

void accumulate(int k)
{
  static int subtotal = 0;

  if (k <= 0)
  {
    printf("Loop cycle %d.\n",count);
    printf("Subtotal:%d total %d.\n",subtotal,total);
    subtotal = 0;
  }
  else
  {
    subtotal += k;
    total += k;
  }
  
  

}