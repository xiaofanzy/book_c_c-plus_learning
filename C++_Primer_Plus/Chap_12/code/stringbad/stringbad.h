#ifndef __STRINGBAD_H__
#define __STRINGBAD_H__

#include <iostream>
using namespace std;

class StringBad
{
private:
  static int num_string;
  int len;
  char *str;
public:
  StringBad();
  StringBad(const char *st);
  StringBad(const StringBad &st);
  StringBad &operator=(const StringBad &st);
  friend ostream &operator<<(ostream &os,const StringBad &st);
  ~StringBad() ;
};


#endif