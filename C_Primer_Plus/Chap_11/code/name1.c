#include <stdio.h>

#define SIZE 81

int main(void)
{
  char name[SIZE];
  char *ptr;
  ptr = gets(name);

  printf("Hello %s",name);
  printf("Hello %s",ptr);
  return 0;
}