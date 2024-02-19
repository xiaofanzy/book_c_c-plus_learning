#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
  char *str;
  int ct;
};

void set(stringy &b,const char pt[]);
void show(const stringy &p,int times = 1);
void show(const char *pt,int times = 1);

int main(void)
{
  stringy beany;
  char testing[] = "Reality isn't it used to be.";

  set(beany,testing);
  show(beany);
  show(beany,2);

  testing[0] = 'D';
  testing[1] = 'u';

  show(testing);
  show(testing,3);
  show("done!");
  delete [] beany.str;
  return 0;
}

void set(stringy &b,const char pt[])
{
  b.ct = strlen(pt) + 1;
  b.str = new char[b.ct];
  strcpy(b.str,pt);
}

void show(const stringy &p,int times)
{
  while (times--)
  {
    cout << "The char is " << p.str << " and length is " << p.ct << endl;
  }
  
}

void show(const char *pt,int times)
{
  for (int i = 0; i < times; i++)
  {
    cout << pt << endl;
  }
  
}