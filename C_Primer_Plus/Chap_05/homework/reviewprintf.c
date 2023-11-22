#include <stdio.h>
#define TEN 10

int main(void)
{
  char n = 'a';
  while (n <= 'g')
  {
    printf("%5c",n++);
  }
  printf("\n");

  return 0;
}