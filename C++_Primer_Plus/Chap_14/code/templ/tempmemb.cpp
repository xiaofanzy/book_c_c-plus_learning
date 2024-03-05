#include <iostream>
#include "stack.h"

using namespace std;

template<template<class T> class Things>
class Crab
{
  private:
    Things<int> s1;
    Things<double> s2;
  public:
    bool push(int a,double b) {return s1.push(a),s2.push(b);}
    bool pop(int &a,double &b){return s1.pop(a),s2.pop(b);}
};

int main(void)
{
  int ni;
  double nb;

  Crab<Stack> nebula;

  cout << "Enter " << endl;
  while ((cin >> ni >> nb) && (ni > 0 && nb > 0))
  {
    nebula.push(ni,nb);
  }

  while (nebula.pop(ni,nb))
  {
    cout << ni << " " << nb << endl;
  }
  
  return 0;
}