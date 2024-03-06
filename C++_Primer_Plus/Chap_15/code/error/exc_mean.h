#ifndef __EXC_MEAN_H__
#define __EXC_MEAN_H__

#include <iostream>

using namespace std;

class hmean
{
private:
  double v1;
  double v2;
public:
  hmean(double a,double b) : v1(a),v2(b){};
  void HShow() const {cout << "it error for " << v1 << " and " << v2 << "devide.\n";}
  ~hmean(){};
};

class gmean
{
public:
  double v1;
  double v2;
  gmean(double a,double b) : v1(a),v2(b){};
  void GShow() const {cout << "it eeror for " << v1 << " and " << v2 << endl;}
  ~gmean(){};
};




#endif