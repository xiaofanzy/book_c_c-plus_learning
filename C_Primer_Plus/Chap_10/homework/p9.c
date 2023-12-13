#include <stdio.h>

void sum_arr(const int size,const int ar1[size],const int ar2[size],int * ar3);

int main(void)
{
  int arr1[4] = {2,4,6,8};
  int arr2[4] = {1,0,4,6};
  // 当为 int *pt 的时候，这时候pt 作为指针需要尾气分配内存。
  int arr3[4] = {0};

  sum_arr(4,arr1,arr2,arr3);

  printf("%d.\n",*arr3);

  return 0;
}

void sum_arr(const int size,const int ar1[size],const int ar2[size],int * ar3)
{
  for (int i = 0; i < size; i++)
  {
    ar3[i] = ar1[i] + ar2[i];
  }

}