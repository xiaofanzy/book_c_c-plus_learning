#include "Tv.h"

bool Tv::volup()
{
  if (vloume < MaxVal)
  {
    vloume++;
    return true;
  }
  return false;
}

bool Tv::voldowm()
{
  if (vloume > MinVal)
  {
    vloume--;
    return true;
  }
  return false;
}

bool Tv::channup()
{
  if(channel < MaxChan)
  {
    channel++;
    return true;
  }
  return false;
}

bool Tv::chandown()
{
  if (channel > MinVal)
  {
    channel++;
    return true;
  }
  return false;
  
}

void Tv::show_settings() const
{
  cout << "state = " << (state == off ? "OFF" : "ON") << endl;
  cout << "volume = " << vloume << endl;
  cout << "channel = " << channel << endl;
  cout << "input = " << (input == TV ? "TV" : "DVD") << endl;
}

Tv::~Tv()
{
  
}
