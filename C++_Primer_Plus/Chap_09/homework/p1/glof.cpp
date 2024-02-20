#include "golf.h"
#include <cstring>
#include <iostream>

void setgolf(golf &g, const char *name,int hc)
{
  for (int i = 0; i < hc; i++)
  {
    g.fullname[i] = *(name + i);
  }
};

int setgolf(golf &g)
{
  using std::cin;
  using std::cout;
  using std::endl;
  char tempname[Len];

  cout << "Enter the fullname:";
  cin.getline(g.fullname,40);

  cout << "Enter the value:";
  cin >> g.handicap;

  
  while (cin.get() != '\n')
  {
    continue;
  }
  
  return 1;
};

void handicap(golf &g,int hc)
{
  g.handicap = hc;
};

void showgolf(const golf &g)
{
  std::cout << g.handicap << std::endl;
};


