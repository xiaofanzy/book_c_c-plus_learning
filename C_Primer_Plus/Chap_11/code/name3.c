#include <stdio.h>

#define SIZE 81

int main(void)
{
  char name[SIZE];
  char *ptr;
  ptr = fgets(name,SIZE,stdin);

  printf("Hello %s",name);
  printf("Hello %s",ptr);
  return 0;
}
