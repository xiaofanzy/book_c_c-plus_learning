#include <iostream>

using namespace std;

int main(void)
{
  cout.setf(ios_base::fixed,ios_base::floatfield);

  int auks = 19.99 + 11.99;
  cout << "auks = " << auks << endl;

  int bats = (int)19.99 + (int)11.99;
  cout << "bats = " << bats << endl;

  int coots = int(19.99) + int(11.99);
  cout << "coots = " << coots << endl;

  char ch = 'z';
  cout << "ch = " << (int)ch << endl;
  cout << "ch = " << static_cast<int>(ch) << endl; 

  return 0;
}