#include "string.h"
#include <cstring>

int String::num_string = 0;

String::String()
{
  len = 0;
  str = new char[1];
  str[0] = '\n';
  num_string++;
}

String::String(const char *st)
{
  len = strlen(st);
  str = new char[len + 1];
  strcpy(str,st);
  num_string++;
}

String::String(const String &s)
{
  // 不能使用默认构造函数，因为构造函数构造完参数就时效了，等于这个没有传递出去；
  // 拷贝构造函数中，应该做的是初始化变量，而不是申明一个临时变量；
  len = strlen(s.str);
  str = new char[len + 1];
  num_string++;
  strcpy(str,s.str);
}

String String::operator=(const String &st)
{
  // 注意，我们需要做的还是一点，初始化初始化；
  if (this == &st)
  {
    return *this;
  }
  delete [] str;
  len = strlen(st.str);
  str = new char[len + 1];
  num_string++;
  strcpy(str,st.str);

  return *this;
}

String String::operator=(const char *s)
{
  len = strlen(s);
  delete [] str;
  str = new char[len + 1];
  strcpy(str,s);
  num_string++;

  return *this;
}

char &String::operator[](int i)
{
  return str[i];
}

const char &String::operator[](int i) const 
{
  return str[i];
}

bool operator<(const String &str1,const String &str2)
{
  return strcmp(str1.str,str2.str) < 0;
}

bool operator>(const String &str1,const String &str2)
{
  return str2 < str1;
}

ostream &operator<<(ostream &os,const String &st)
{
  os << st.str << endl;
  return os;
}

istream &operator>>(istream &is,String &st)
{
  char *temp;
  is.get(temp,String::CLIMITS);

  while (is && is.get() !='\n')
  {
    continue;
  }

  st = temp;
  return is;
}

String::~String()
{
  delete [] str;
  num_string--;
}

int String::HowMany()
{
  return num_string;
}