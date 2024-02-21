#ifndef __MYTIME0_H__
#define __MYTIME0_H__
#include <iostream>

using namespace std;

class Time
{
private:
  int minutes;
  int hours;
public:
  Time();
  Time(int h,int m = 0);
  void AddMin(int m);
  void AddHour(int h);
  void Reset(int m = 0,int h = 0);
  Time operator+(const Time &t) const;
  Time operator*(const int mult) const;
  friend Time operator*(const int mult,const Time &t);
  friend ostream &operator<<(ostream &os,const Time &t);
  //void show() const;
  ~Time();
};

#endif