#include <stdio.h>

int main(void)
{
  int zippo[4][2] = {{2,4},{3,5},{4,6},{1,8}};
  //比较 (*pz)[2] vs * pz[2]
  int (*pz)[2];
  pz = zippo;

  // 指针的地址和数组的地址，本质上不是一回事，
  // int **pt 当pt = zippo 的时候，会出现类型不匹配的问题，本质上，zippo指向的是一个一维数组。一维数组指向的是一维数组的首地址，
  // 而 *pt 是一个指针，他指向的是一个地址值， zippo = zippo[0] ={2.4} 这是一维数组的地址，这俩虽然都是地址，但是不是一回事。

  printf("pz = %p, pz + 1 = %p.\n",pz,pz + 1);
  printf("zippo = %p,zioop + 1 = %p.\n",zippo, zippo + 1);
  printf("zippo[0] = %p, zipp[0] + 1 = %p.\n",zippo[0], zippo[0] + 1);
  printf("pz[0] = %p, pz[0] + 1 = %p.\n",pz[0], pz[0] + 1);
  printf("*zippo = %p, *zippo + 1 = %p.\n",*zippo, *zippo + 1);
  printf("zippo[0][0] = %d.\n",zippo[0][0]);
  printf("*zippo[0] = %d.\n",*zippo[0]);
  printf("**zippo = %d\n",**zippo);
  // 这里不能使用*(*zippo[2] + 1) 因为zippo[2] 本身就是地址， 地址便宜一个单位量还是地址，
  // 我们取值的时候，要求这个地址指向的值是int类型的，但是很明显这个里面指向的值是个地址值，而非一个int类型的值；
  printf("*(*zippo[2] + 1) = %d\n",*(zippo[2] + 1));

  return 0;
}