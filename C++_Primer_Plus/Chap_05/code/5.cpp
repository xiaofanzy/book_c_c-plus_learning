#include <iostream>

int main(void)
{
  using std::cout;
  using std::endl;
  using std::cin;

  int by;
  cout << "enter the by:";
  cin >> by;

  cout << "Counting by " << by << "s:\n";
  for (int i = 0; i < 100; i = i + by)
  {
    cout << i << endl;
  }
  


  return 0;
}