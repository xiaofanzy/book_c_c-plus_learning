#include <stdio.h>
#include <time.h>

extern unsigned int rand(void);
extern void srand(unsigned int seed);

int main(void)
{
  srand(time(0));
  for (int i = 0; i < 5; i++)
  {
    rand();
    printf("%d.\n",rand());
  }
  
}