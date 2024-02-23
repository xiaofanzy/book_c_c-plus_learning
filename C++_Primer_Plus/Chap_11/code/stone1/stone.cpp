#include "stone.h"


Stonewt::Stonewt()
{
  stone = pds_left = pounds = 0.0;
}

Stonewt::Stonewt(double lbs)
{
  pounds = lbs;
  stone = (int)pounds / Lbs_per_stn;
  pds_left = pounds - stone * Lbs_per_stn;
}

Stonewt::Stonewt(int stn,double lbs)
{
  pounds = stn * Lbs_per_stn  + lbs;
  stone = stn;
  pds_left = lbs;
}

void Stonewt::show_lbs() const
{
  cout << "stone" << stone << " and pds_left " << pds_left << endl;
}

void Stonewt::show_stn() const
{
  cout << "pounds" << pounds << endl;
}

Stonewt::operator double() const
{
  return (int)(pounds + 0.5);
}

Stonewt::operator int() const 
{
  return int(pounds);
}

Stonewt::~Stonewt()
{

}