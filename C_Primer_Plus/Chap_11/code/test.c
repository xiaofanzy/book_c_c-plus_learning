#include <stdio.h>

int main(void)
{
  int arr[2][2] = {1,2,3,4};



  // 不能直接生成int (*pt)[2] = {{1,2},{2,3}} 是因为，int (*pt)[2] 是一个包含两个指针的二维数组，类似于{*pt1,*pt2}；
  // {{1,2},{2,3}} 但这里是两个二维数组.
  int (*pt)[2] = arr;

  printf("%d",**pt);

  return 0;
}