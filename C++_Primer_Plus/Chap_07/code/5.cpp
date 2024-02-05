#include <iostream>

using namespace std;
const int ArSize = 8;

int sum_cookie(int *pt,int n);

int main(void)
{
  int cookies[ArSize] = {1,2,3,4,5,6,7,8};

  int reuslt = sum_cookie(cookies,ArSize);

  cout << "The total is " << reuslt << " cookies." << endl;

  return 0;
}

int sum_cookie(int *pt,int n)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += *(pt+i);
  }

  return total;
  
}