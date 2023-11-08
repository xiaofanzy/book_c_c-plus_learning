#include<stdio.h>

void praise(void);
void nobody(void);

int main(void)
{
  praise();
  praise();
  praise();

  nobody();

  return 0;
}

void praise(void)
{
  printf("For he's a jolly good fellow!\n");
}

void nobody(void)
{
  printf("Which nobody can deny!\n");
}