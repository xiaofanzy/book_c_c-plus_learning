#include <stdio.h>

int main(void)
{
  for (int count = 0; count < 4; count++)
  {
    printf("here comes iteration %d:\n", count);
    trystat();
  }

  return 0;
}

void trystat(void)
{
  int fade = 1;
  static int stay = 1;

  printf("fade = %d and stay = %d\n", fade++, stay++);
}