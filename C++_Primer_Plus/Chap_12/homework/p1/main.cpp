#include "p1.h"

int main(void)
{
  Cow cow;

  Cow cow1("ddd","aaa",20.0);

  cow = cow1;
  cow.ShowCow();



  return 0;
}