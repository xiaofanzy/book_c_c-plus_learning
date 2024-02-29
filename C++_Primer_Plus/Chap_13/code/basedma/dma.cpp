#include "dma.h"


BaseDma::BaseDma(const char *s,int r)
{
  lable = new char[strlen(s) + 1];
  strcpy(lable,s);
  rating = r;
}

BaseDma::BaseDma(const BaseDma &bs)
{
  lable = new char[strlen(bs.lable) + 1];
  strcpy(lable,bs.lable);
  rating = bs.rating;
}

BaseDma &BaseDma::operator=(const BaseDma &s)
{
  if (this == &s)
  {
    return *this;
  }
  delete []lable;
  lable = new char[strlen(s.lable) + 1];
  strcpy(lable,s.lable);
  rating = s.rating;
  return *this;
}

ostream &operator<<(ostream &os,const BaseDma &b)
{
  os << "lable = " << b.lable << endl;
  os << "rating = " << b.rating << endl;
  return os;
}

BaseDma::~BaseDma()
{
  delete [] lable;
}

LackDma::LackDma(const char *l,int r,const char *c) : BaseDma(l,r)
{
 strncpy(color,c,COL_LEN - 1);
 color[COL_LEN] = '\0'; 
}

LackDma::LackDma(const BaseDma &bs,const char *c) : BaseDma(bs)
{
  strncpy(color,c,COL_LEN - 1);
  color[COL_LEN] = '\0'; 
}

ostream &operator<<(ostream &os,const LackDma &ld)
{
  os << (const BaseDma &)ld;
  os << "Color " << ld.color << endl;
  return os;
}

HasDma::HasDma(const char *s,int r,const char *st) : BaseDma(s,r)
{
  style = new char[strlen(st) + 1];
  strcpy(style,st);
}

HasDma::HasDma(const BaseDma &bd,const char *st) : BaseDma(bd)
{
  style = new char[strlen(st) + 1];
  strcpy(style,st);
}

HasDma::HasDma(const HasDma &hd) : BaseDma((const BaseDma &)hd)
{
  style = new char[strlen(hd.style) + 1];
  strcpy(style,hd.style);
}

HasDma HasDma::operator=(const HasDma &hd)
{
  if (this == &hd)
  {
    return *this;
  }
  
  BaseDma::operator=(hd);
  delete [] style;
  style = new char[strlen(hd.style) + 1];
  strcpy(style,hd.style);
  return *this;
}

ostream &operator<<(ostream &os,const HasDma &hd)
{
  os << (const BaseDma &)hd;
  os << "style :" << hd.style << endl;
  return os;
}

HasDma::~HasDma()
{
  delete [] style;
}


