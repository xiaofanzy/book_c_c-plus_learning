#ifndef __P1_H__
#define __P1_H__

#include <iostream>
#include <cstring>

using namespace std;

class Cd
{
private:
  char *performers;
  char *lable;
  int selections;
  double playtime;
public:
  Cd(const char *s1,const char *s2,int n,double x);
  Cd(const Cd &d);
  Cd();
  virtual void Report() const;
  Cd & operator=(const Cd &d);
  virtual ~Cd();
};


class Classic : public Cd
{
private:
  char *l;
public:
  
  Classic();
  Classic(const Classic &d);
  Classic(const char *s1,const char *s2,int n,double x,char *s3);
  Classic(const char *s1,const char *s2,const char *s3,int n,double x);
  virtual void Report() const;
  Classic &operator=(const Classic &d);
  ~Classic();
};


#endif