#include "student.h"

double Student::Average() const
{
  if (ArrayDB::size() > 0)
  {
    return ArrayDB::sum() / ArrayDB::size();
  }

  return 0;
  
}

const string &Student::Name() const
{
  return (const string &)*this;
}

double &Student::operator[](int n)
{
  return ArrayDB::operator[](n);
}

double Student::operator[](int n) const
{
  return ArrayDB::operator[](n);
}

istream &operator>>(istream &is,Student &stu)
{
  is >> (string &)stu;
  return is;
}

istream &getline(istream &is,Student &stu)
{
  getline(is,(string &)stu);
  return is;
}

/* ostream &Student::set_out(ostream &os) const
{
  int i = 0;
  int size = ArrayDB::size();
  for(i = 0; i < size; i++)
  {
    os << ArrayDB::operator[](i) << " ";
    if (i % 5 == 4)
    {
      os << endl;
    }
  }
  if (i % 5 == 0)
  {
    os << endl;
  }
  return os;
} */

ostream &operator<<(ostream &os,const Student &stu)
{
  os << (const string &)stu << endl;
  int i = 0;
  int size = stu.size();
  for(i = 0; i < size; i++)
  {
    os << stu.operator[](i) << " ";
    if (i % 5 == 4)
    {
      os << endl;
    }
  }
  if (i % 5 == 0)
  {
    os << endl;
  }
  return os;
}








