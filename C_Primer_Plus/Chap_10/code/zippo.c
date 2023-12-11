#include <stdio.h>

int main(void)
{
  int zippo[4][2] = {{2,4},{3,5},{4,6},{1,8}};

  printf("zippo = %p, zipp0 + 1 = %p.\n",zippo, zippo + 1);
  printf("zippo[0] = %p, zipp[0] + 1 = %p.\n",zippo[0], zippo[0] + 1);
  printf("*zippo = %p, *zippo + 1 = %p.\n",*zippo, *zippo + 1);
  printf("zippo[0][0] = %d.\n",zippo[0][0]);
  printf("*zippo[0] = %d.\n",*zippo[0]);
  printf("**zippo = %d\n",**zippo);
  // 这里不能使用*(*zippo[2] + 1) 因为zippo[2] 本身就是地址， 地址便宜一个单位量还是地址，
  // 我们取值的时候，要求这个地址指向的值是int类型的，但是很明显这个里面指向的值是个地址值，而非一个int类型的值；
  printf("*(*zippo[2] + 1) = %d\n",*(zippo[2] + 1));

  return 0;
}