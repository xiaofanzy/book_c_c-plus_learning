#include <stdio.h>
#include <string.h>
#define PRAISE "WHAT A SUPER MARVELOUS NAME!"

int main(void)
{
  char name[40];
  const int MOUNTHS = 12;

  printf("what's your name?\n");
  scanf("%s",name);

  printf("your name of %d letters occupies %d monery\n", strlen(name), sizeof(name));
  printf("The praise has %d letters\n", strlen(PRAISE));
  printf("the parise has occupies %d memorys.\n", sizeof PRAISE);

  return 0;
}