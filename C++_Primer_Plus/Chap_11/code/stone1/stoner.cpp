#include "stone.h"

int main(void)
{
  Stonewt st(522);
  st.show_lbs();

  Stonewt sts = 121;
  sts.show_lbs();

  st = sts;
  st.show_stn();

  double at = st;
  cout << at << endl;

  cout << int(st) <<endl;

  return 0;
}