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

void rect_to_polar(const rect *rt,polar *pt);
void show_polar(polar *pt);

int main(void)
{
  rect rplace;
  polar pplace;

  cout << "Enter the x and y values:";
  while (cin >> rplace.x >> rplace.y)
  {
    rect_to_polar(&rplace, &pplace);
    show_polar(&pplace);
    cout << "Next two number q to quit: ";
  }

  cout << "bye!" << endl;
  return 0;
}


void rect_to_polar(const rect *rt,polar *pt)
{

  pt->distance = sqrt(rt->x * rt->x + rt->y * rt->y);
  pt->angle = atan2(rt->y,rt->x);
}

void show_polar(polar *pt)
{
  const double Rad_To_deg = 57.29577951;

  cout << "distince " << pt->distance;
  cout << " angle = " << pt->angle * Rad_To_deg;
  cout << " degrees" << endl;
}