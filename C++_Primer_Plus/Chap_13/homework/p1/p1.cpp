#include "p1.h"

Cd::Cd(const char *s1,const char *s2,int n,double x)
{
  strncpy(performers,s1,50);
  strncpy(lable,s2,20);
  selections = n;
  playtime = x;
}

Cd::Cd(const Cd &d)
{
  strcpy(performers,d.performers);
  strcpy(lable,d.lable);
  selections = d.selections;
  playtime = d.playtime;
}

Cd::Cd()
{
  performers[0] = lable[0] =  '\n';
  selections = 0;
  playtime = 0.0;
}

Cd &Cd::operator=(const Cd &d)
{
  if (this == &d)
  {
    return *this;
  }
  strcpy(performers,d.performers);
  strcpy(lable,d.lable);
  selections = d.selections;
  playtime = d.playtime;
  return *this;  
}

void Cd::Report() const
{
  cout << "performers = " << performers << endl;
  cout << "lable = " << lable << endl;
  cout << "selections = " << selections << endl;
  cout << "playtime =  " << playtime << endl;
}

Cd::~Cd()
{

}

Classic::Classic(const char *s1,const char *s2,int n,double x,char *s3) : Cd(s1,s2,n,x)
{
  strncpy(l,s3,50);
}

Classic::Classic(const char *s1,const char *s2,const char *s3,int n,double x) : Cd(s1,s2,n,x)
{
  strncpy(l,s3,50);
}

Cd Classic::exchangePer(const char *s1,Cd &d)
{
  return *this;
}

Classic::~Classic()
{

}

Classic::Classic()
{

}