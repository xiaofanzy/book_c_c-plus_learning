#include "p4.h"

int main(void)
{
  Port p("dd","xx",20);
  p.Show();

  cout << "-------------" << endl;
  VintagePort v1("xx",20,"9080",55);
  cout << v1;

  cout << "-------------" << endl;
  VintagePort v2 = v1;
  cout << v2;

  return 0;
}