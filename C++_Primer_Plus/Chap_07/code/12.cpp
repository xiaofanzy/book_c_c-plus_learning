#include <iostream>
#include <cmath>

using namespace std;


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

int main(void)
{
  rect rplace;
  polar pplace;

  cout << "Enter the x and y values:";
  while (cin >> rplace.x >> rplace.y)
  {
    pplace = rect_to_polar(rplace);
    show_polar(pplace);
    cout << "Next two number q to quit";
  }

  cout << "bye!" << endl;
  return 0;
}


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