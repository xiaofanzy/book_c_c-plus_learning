#ifndef __STRING_H__ 
#define __STRING_H__

#include <iostream>

using namespace std;

class String
{
private:
  static int num_string;
  char *str;
  int len;
  const static int CLIMITS = 80;

public:
  String();
  String(const char *st);
  String(const String &st);
  int length() const {return len;}
  ~String();

  String operator=(const String &st);
  String operator=(const char *s);
  char &operator[](int i);
  const char &operator[](int i) const;

  friend bool operator<(const String &str1,const String &str2);
  friend bool operator>(const String &str1,const String &str2);
  friend bool operator==(const String &str1,const String &str2);
  friend ostream &operator<<(ostream &os,const String &st);
  friend istream &operator>>(istream &is,String &st);

  static int HowMany();

};


#endif