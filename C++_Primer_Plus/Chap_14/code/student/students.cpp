#include "students.h"

double Student::Average() const
{
  if (scores.size() > 0)
  {
    return scores.sum() / scores.size();
  }
  return 0;  
}

const string &Student::Name() const
{
  return name;
}

double &Student::operator[](int n)
{
  return scores[n];
}

double Student::operator[](int n) const
{
  return scores[n];
}

istream &operator>>(istream &is,Student &stu)
{
  is >> stu.name;
  return is;
}

ostream &operator<<(ostream &os,const Student &stu)
{
  os << stu.name << endl;
  int s = stu.scores.size();
  int i = 0;
  for (i = 0; i < s; i++)
  {
    os << stu.scores[i] << " ";
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

istream &getline(istream &is,Student &stu)
{
  getline(is,stu.name);
  return is;
}
