#include "string.h"

int main(void)
{
  String s1;
  String s2("Hello world");

  cout << s1;
  cout << s2;

  s1 = s2;
  cout << s1;

  cout << (s1 < s2) << endl;
  cout << s1[1] << endl;

  cout << s1.length() << endl;
  cout << String::HowMany() << endl;

  return 0;
}