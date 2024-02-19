#ifndef __COORDIN_H__
#define __COORDIN_H__

struct polar
{
  double distance;
  double angle;
};

struct rect
{
  double x;
  double y;
};

polar rect_to_polar(rect r);
void show_polar(polar p);

#endif