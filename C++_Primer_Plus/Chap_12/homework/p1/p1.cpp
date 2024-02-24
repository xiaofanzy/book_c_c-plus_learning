#include "p1.h"
#include <cstring>

Cow::Cow()
{
  hobby = NULL;
  name[0] = '\n';
  weight = 0;
}

Cow::Cow(const char * nm,const char *ho,double wt)
{
  strncpy(name,nm,20);
  hobby = new char[strlen(ho) + 1];
  strcpy(hobby,ho);
  weight = wt;
}

Cow::Cow(const Cow &c)
{
  strcpy(name,c.name);
  hobby = new char[strlen(c.hobby) + 1];
  strcpy(hobby,c.hobby);
  weight = c.weight;
}

Cow::~Cow()
{
  delete hobby;
}

Cow &Cow::operator=(const Cow &c)
{
  strcpy(name,c.name);
  hobby = new char[strlen(c.hobby) + 1];
  strcpy(hobby,c.hobby);
  weight = c.weight;
  return *this;
}

void Cow::ShowCow() const
{
  cout << name << "  " << hobby << " " << weight << endl; 
}