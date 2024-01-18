#include <iostream>

int main(void)
{
  using namespace std;

  int a,b;

  cin >> a >> b;

  cout << a << " and " << b << " bigger is " << (a > b ? a : b) << endl;

  return 0;
}