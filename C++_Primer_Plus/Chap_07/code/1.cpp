#include <iostream>

using namespace std;

void simple(void);

int main(void)
{
  cout << "First" << endl;
  simple();

  return 0;
}

void simple(void)
{
  cout << "Second" << endl;
}