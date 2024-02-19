#include <iostream>
#include <cmath>
#include "coordin.h"

using namespace std;

polar rect_to_polar(rect r)
{
  polar answer;

  answer.distance = sqrt(r.x * r.x + r.y * r.y);
  answer.angle = atan2(r.y,r.x);
  return answer;
}

void show_polar(polar p)
{
  const double Rad_To_deg = 57.29577951;

  cout << "distince " << p.distance;
  cout << "angle = " << p.angle * Rad_To_deg;
  cout << " degrees" << endl;
}