#include "stringbad.h"
#include <cstdlib>
#include <cstring>

int StringBad::num_string = 0;

StringBad::StringBad()
{
  len = 3;
  str = new char[len + 1];
  strcpy(str,"c++");
  num_string++;
  cout << "" << str << " is created.\n";
}

StringBad::StringBad(const char *st)
{
  len = strlen(st);
  str = new char[len + 1];
  strcpy(str,st);
  num_string++;
  cout << " " << str << " is created.\n";
}

ostream &operator<<(ostream &os,const StringBad &st)
{
  os << st.str << endl;
  return os;
}

StringBad::~StringBad()
{
  cout << "~StringBad is used" << endl;
  cout << str << " is delete" << endl;
  delete [] str;
}

StringBad::StringBad(const StringBad &st)
{
  // 这里不能使用构造函数；
  len = st.len;
  str = new char[len + 1];
  strcpy(str,st.str);
  num_string++;
  cout << " " << str << " is created.\n";
}

StringBad &StringBad::operator=(const StringBad &st)
{
  if (this == &st)
  {
    return *this;
  }

  len =strlen(st.str);
  str = new char(len + 1);
  strcpy(str,st.str);
  num_string++;
  cout << " " << str << " is created>\n";
  return *this;
}