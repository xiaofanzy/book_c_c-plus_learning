#ifndef __STONE_H__
#define __STONE_H__

#include <iostream>

using namespace std;

class Stonewt
{
private:
  enum{Lbs_per_stn = 14};
  int stone;
  double pds_left;
  double pounds;
public:
  Stonewt();
  explicit Stonewt(double lbs);
  Stonewt(int stn,double lbs);
  void show_lbs() const;
  void show_stn() const;
  ~Stonewt();
};

#endif