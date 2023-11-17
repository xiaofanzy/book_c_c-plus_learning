#include <stdio.h>

int main(void)
{
  char name[40];
  float height;

  printf("name:");
  scanf("%s",name);

  printf("height:");
  scanf("%f",&height);

  printf("%s , your are %0.3f feet tail\n", name,height);

  return 0;
}