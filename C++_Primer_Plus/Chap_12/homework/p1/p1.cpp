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
  strcpy(name,nm);
  hobby = new char[strlen(ho) + 1];
  strcpy(hobby,ho);
  weight = wt;
}

Cow::Cow(const Cow &c)
{
  

}