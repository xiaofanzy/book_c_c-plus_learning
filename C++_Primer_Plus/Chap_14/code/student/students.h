#ifndef __STUDENTS_H__
#define __STUDENTS_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student
{
private:
  typedef valarray<double> ArrayDB;
  string name;
  ArrayDB scores;
public:
  Student() : name("Null student"), scores(){}
  explicit Student(const string &s) : name(s),scores(){}
  explicit Student(int n) : name("Nully"),scores(n){}
  Student(const string &s,int n) : name(s),scores(n){}
  Student(const string &s,const ArrayDB &a) : name(s),scores(a){}
  Student(const string &s,const double *pd,int n) : name(s), scores(pd,n){}
  double Average() const;
  const string &Name() const;
  double &operator[](int n);  // 这个可以赋值 stu[0] = 100
  double operator[](int n) const;  // 这个可以右值 a = stu[0]
  ~Student(){};

  friend istream &operator>>(istream &is,Student &stu);
  friend ostream &operator<<(ostream &os,const Student &stu);
  friend istream &getline(istream &is,Student &stu);
};


#endif