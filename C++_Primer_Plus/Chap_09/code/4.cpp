#include <iostream>

using namespace std;
void oil(int x);

/**
 * 这就是函数作用域的问题。
*/
int main(void)
{
  int i = 1;
  int y = 2;

  cout << i << " " << &i << endl;
  cout << y << " " << &y << endl;

  oil(i);

  cout << i << " " << &i << endl;
  cout << y << " " << &y << endl;

}

void oil(int x)
{
  int i = 3;

  cout << "in oil i = " << i << " " << &i << endl;
  cout << "in oil x = " << x << " " << &x << endl;

  {
    int i = 4;
    cout << "in space i = " << i << " " << &i << endl;
    cout << "in space x = " << x << " " << &x << endl;
  }

  cout << "in oil i = " << i << " " << &i << endl;
  cout << "in oil x = " << x << " " << &x << endl;

}