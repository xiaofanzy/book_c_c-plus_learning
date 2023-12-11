#include <stdio.h>

int main(void)
{
  int zippo[4][2] = {{2,4},{3,5},{4,6},{1,8}};

  printf("zippo = %p, zipp0 + 1 = %p.\n",zippo, zippo + 1);
  printf("zippo[0] = %p, zipp[0] + 1 = %p.\n",zippo[0], zippo[0] + 1);
  printf("*zippo = %p, *zippo + 1 = %p.\n",*zippo, *zippo + 1);
  return 0;
}