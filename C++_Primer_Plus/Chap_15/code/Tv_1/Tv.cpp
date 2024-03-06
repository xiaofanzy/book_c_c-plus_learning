#include "TV.h"

bool Tv::volup()
{
  if (volume < MaxVal)
  {
    volume++;
    return true;
  }
  return false;
}

bool Tv::voldowm()
{
  if (volume > MinVal)
  {
    volume--;
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

bool Tv::channdown()
{
  if (channel > MinVal)
  {
    channel++;
    return true;
  }
  return false;
  
}

void Tv::show_setting() const
{
  cout << "state = " << (state == off ? "OFF" : "ON") << endl;
  cout << "volume = " << volume << endl;
  cout << "channel = " << channel << endl;
  cout << "input = " << (input == TV ? "TV" : "DVD") << endl;
}

Tv::~Tv()
{
  
}
