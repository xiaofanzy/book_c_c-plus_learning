#include "p1.h"

Cd::Cd(const char *s1,const char *s2,int n,double x)
{
  performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);

	lable = new char[strlen(s2) + 1];
	strcpy(lable, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
  performers = new char[strlen(d.performers) + 1];
  strcpy(performers,d.performers);
  lable = new char[strlen(d.lable) + 1];
  strcpy(lable,d.lable);
  selections = d.selections;
  playtime = d.playtime;
}

Cd::~Cd()
{
  delete [] performers;
  delete [] lable;
}

Cd::Cd()
{
  performers = NULL;
  lable = NULL;
  selections = 0;
  playtime = 0.0;
}

Cd &Cd::operator=(const Cd &d)
{
  if (this == &d)
  {
    return *this;
  }
  delete [] performers;
  delete [] lable;
  performers = new char[strlen(d.performers) + 1];
  lable = new char[strlen(d.lable) + 1];
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

void Classic::Report() const
{
  Cd::Report();
  cout << " work = " << l << endl;
}



Classic::Classic(const char *s1,const char *s2,int n,double x,char *s3) : Cd(s1,s2,n,x)
{
  l = new char[strlen(s3) + 1];
  strcpy(l,s3);
}

Classic::Classic(const char *s1,const char *s2,const char *s3,int n,double x) : Cd(s1,s2,n,x)
{
  l = new char[strlen(s3) + 1];
  strcpy(l,s3);
}



Classic::~Classic()
{
  delete [] l;
}

Classic::Classic() : Cd()
{
  l = NULL;
}

Classic::Classic(const Classic &d) : Cd(d)
{
  Cd::operator=(d);
  l = new char[strlen(d.l) + 1];
  strcpy(l,d.l);
}

Classic &Classic::operator=(const Classic &d)
{
  if (this == &d)
  {
    return *this;
  }
  Cd::operator=(d);
  delete []l;
  l = new char[strlen(d.l) + 1];
  strcpy(l,d.l);
  return *this;
}