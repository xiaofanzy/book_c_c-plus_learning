#include "Tv.h"

int main(void)
{
  Tv panda;
  cout << "--------------" << endl;
  panda.volup();
  panda.channup();
  panda.show_settings();
  cout << "--------------" << endl;
  Remote re;
  re.voldown(panda);
  re.chandown(panda);
  re.set_input(panda);
  panda.show_settings();
}