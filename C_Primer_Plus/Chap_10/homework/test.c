#include <stdio.h>

int main(void)
{

  int (* pti)[2];

  int torf[2][2] = {12, 14, 16};

  pti = torf;

  printf("%d %d\n", **pti, **(pti + 1));

  return 0;


}