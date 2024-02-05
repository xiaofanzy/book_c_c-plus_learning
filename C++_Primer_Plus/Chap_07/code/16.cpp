#include <iostream>

using namespace std;
void cutdown(int n);

int main(void)
{

  cutdown(5);


  return 0;
}

void cutdown(int n)
{
  cout << "start : n = " << n << endl;
  if (n > 0)
  {
    cutdown(n - 1);
  }
  cout << "after : n = " << n << endl;
  
}