#ifndef __STUDENTS_H__
#define __STUDENTS_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student :private string,private valarray<double>
{
private:
  typedef valarray<double> ArrayDB;
  ostream &set_out(ostream &os) const;
public:
  Student() : string("null"),ArrayDB(){}
  explicit Student(const string &s) : string(s),ArrayDB(){}
  explicit Student(int n) : string("null"),ArrayDB(n){}
  Student(const string &s,int n) : string(s),ArrayDB(n){}
  Student(const string &s,const ArrayDB &a) : string(s),ArrayDB(a){}
  Student(const string &s,double *pt,int n) : string(s),ArrayDB(pt,n){}
  double Average() const;
  const string &Name() const;
  double &operator[](int n);
  double operator[](int n) const;
  ~Student (){};

  friend istream &operator>>(istream &is,Student &stu);
  friend ostream &operator<<(ostream &os,const Student &stu);
  friend istream &getline(istream &is,Student &stu);
};


#endif