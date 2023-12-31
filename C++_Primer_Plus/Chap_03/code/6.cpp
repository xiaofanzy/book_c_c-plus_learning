#include <iostream>

using namespace std;

int main(void)
{
  char ch = 'm';
  int i = ch;
  cout << "i = " << i << " and M = " << ch << endl;

  ch = ch + 1;
  i = i + 1;

  cout << "now i = " << i << " and m = " << ch << endl;
  cout.put(ch);
  cout << " ! " << endl << "Done" << endl;

  return 0;
}