#include <iostream>

using namespace std;

extern int a;
static int c = 50;
int b = 60;

void show(void)
{
   cout << "a: " << &a << " b: " << &b << " c:" << &c << endl;
}
