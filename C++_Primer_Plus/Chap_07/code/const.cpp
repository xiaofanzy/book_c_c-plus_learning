#include <iostream>

using namespace std;

int main(void)
{
  int m = 10;
  int n = 100;


  // 这 俩一样 可以修改值，但是不可以修改地址；
  const int *p  = &m;

  //*p = n;

  int const *pt = &m;
  //*pt =n;

  // 可以修改值，但是不能修改地址；
  int *const pts = &m;

  //pts = &n;

  // 不能修改值，也不能修改地址
  const int * const ptss = &m;


  return 0;
}