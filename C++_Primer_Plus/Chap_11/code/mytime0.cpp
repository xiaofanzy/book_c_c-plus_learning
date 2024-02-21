#include <iostream>
#include "mytime0.h"

Time::Time()
{}

Time::Time(int h,int m)
{
  hours = h;
  minutes = m;
}

void Time::AddMin(int m)
{
  minutes += m;
  hours += minutes / 60;
  minutes %= 60;
}

void Time::AddHour(int h)
{
  hours += h;
}

void Time::Reset(int m,int h)
{
  minutes = m;
  hours = h;
}

Time Time::operator+(const Time &t) const
{
  Time sum;
  sum.minutes = minutes + t.minutes;
  std::cout << sum.minutes << std::endl;
  sum.hours = hours + t.hours + sum.minutes / 60;
  sum.minutes %= 60;

  return sum; 
}

Time Time::operator*(const int mult) const
{
  Time temp;
  temp.minutes = minutes * mult + minutes;
  temp.hours = hours * mult + temp.minutes / 60;
  temp.minutes /= 60;

  return temp;
}

Time operator*(const int mult,const Time &t)
{
  Time result;

	long totalminutes = t.hours*mult*60 + t.minutes*mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}

/*
void Time::show() const
{
  std::cout << "minutes = " << minutes << " and hours = " << hours << std::endl;
}
*/

ostream &operator<<(ostream &os,const Time &t)
{
  std::cout << t.hours << " hours, " << t.minutes << " minutes." << std::endl;
  return os;
}

Time::~Time()
{

}