#include <stdio.h>
#define BLURB "HELLO WORLD"

int main(void)
{
  printf("*%s*\n", BLURB);
  printf("*%24s*\n",BLURB);
  printf("*%24.5s*\n",BLURB);
  printf("*%-24.5s*\n",BLURB);

  return 0;
}