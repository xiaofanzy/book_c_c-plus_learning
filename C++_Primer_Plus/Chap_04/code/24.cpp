#include <iostream>

struct antartica_years_end
{
  int year; 
};


int main(void)
{
  using namespace std;

  antartica_years_end s01,s02,s03;

  s01.year = 1998;

  antartica_years_end * pa = &s02;
  pa->year = 1999;

  antartica_years_end trio[3];
  trio[0].year = 2003;
  cout << trio->year << endl;
  cout << trio[0].year << endl;
  const antartica_years_end * arp[3] = {&s01,&s02,&s03};
  cout << arp[0]->year << endl;
  cout << (*arp)->year << endl;

  const antartica_years_end **ppa = arp;
  auto ppb = arp;
  cout << (*ppa)->year << endl;
  cout << (*(ppb + 1))->year << endl;

  return 0;
}