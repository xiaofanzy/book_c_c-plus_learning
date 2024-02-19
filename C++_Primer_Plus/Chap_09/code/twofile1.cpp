#include <iostream>

using namespace std;

int a = 10;
static int b = 20;
int c = 30;

void show(void);

int main(void)
{
  cout << "a: " << &a << " b: " << &b << " c:" << &c << endl;

  show();

  return 0;
}