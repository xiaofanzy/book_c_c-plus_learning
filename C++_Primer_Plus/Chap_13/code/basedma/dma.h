#ifndef __DMA_H__
#define __DMA_H__

#include <iostream>
#include <cstring>

using namespace std;

class BaseDma
{
private:
  char *lable;
  int rating;
public:
  BaseDma(const char *s = "nobody",int r = 0);
  BaseDma(const BaseDma &bs);
  BaseDma &operator=(const BaseDma &s);
  friend ostream &operator<<(ostream  &os,const BaseDma &b);
  virtual ~BaseDma();
};

class LackDma : public BaseDma
{
private:
  enum {COL_LEN = 40};
  char color[COL_LEN];
public:
  LackDma(const char *s = "nobody",int r = 0,const char *c = "blue");
  LackDma(const BaseDma &bs,const char *c = "blue");
  friend ostream &operator<<(ostream &os,const LackDma &ld);
};

class HasDma : public BaseDma
{
private:
  char *style;
public:
  HasDma(const char *s = "nobody",int r = 0,const char *st = "null");
  HasDma(const BaseDma &bd,const char *st = "null");
  HasDma(const HasDma &hd);
  HasDma operator=(const HasDma &hd);
  friend ostream &operator<<(ostream &os,const HasDma &hd);
  ~HasDma();
};







#endif