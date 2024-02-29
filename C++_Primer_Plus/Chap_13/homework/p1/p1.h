#ifndef __P1_H__
#define __DMA_H__

#include <iostream>
#include <cstring>

using namespace std;

class Cd
{
private:
  char performers[50];
  char lable[20];
  int selections;
  double playtime;
public:
  Cd(const char *s1,const char *s2,int n,double x);
  Cd(const Cd &d);
  Cd();
  void Report() const;
  Cd & operator=(const Cd &d);
  virtual ~Cd();
};


class Classic : public Cd
{
private:
  char l[50];
public:
  Classic(const char *s1,const char *s2,int n,double x,char *s3);
  Classic(const char *s1,const char *s2,const char *s3,int n,double x);
  Classic();
  Cd exchangePer(const char *s1,Cd &d);
  ~Classic();
};


#endif