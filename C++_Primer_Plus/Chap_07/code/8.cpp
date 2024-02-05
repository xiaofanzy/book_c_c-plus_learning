#include <iostream>

using namespace std;
const int ArSize = 8;

int sum_cookie(const int *begin,const int *end);

int main(void)
{
  int cookies[ArSize] = {1,2,3,4,5,6,7,8};

  int reuslt = sum_cookie(cookies,cookies + 8);

  cout << "The total is " << reuslt << " cookies." << endl;

  return 0;
}

int sum_cookie(const int *begin,const int *end)
{
  int total = 0;
  // 这就必须要理解，const int *pt  代表的是 不能通过*pt 修改数组的值，但是可以修改pt 指针的指向；
  for (const int *p = begin; p != end;p++)
  {
    total += *p;
  }

  return total;
  
}