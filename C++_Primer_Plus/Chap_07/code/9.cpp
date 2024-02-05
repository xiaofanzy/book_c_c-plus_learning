#include <iostream>

using namespace std;
int sum_t(const char mm[],char ch);

int main(void)
{
  char mm[15] = "addddwex";
  const char *pt = "bdfewfewf";
  int b = sum_t(mm,'b');
  int a = sum_t(mm,'a');

  cout << "total is " << sum_t(mm,'a') << endl;
  cout << "total is " << sum_t(pt,'b') << endl;
  return 0;
}

int sum_t(const char mm[],char ch)
{
  int total = 0;
  while (*mm)
  {
    if (*mm == ch )
    {
      total++;
    }
    mm++;
  }
  return total;
}