#include <iostream>
#include "mytime0.h"

using namespace std;

int main(void)
{
  Time coding(5,55);
  Time fixing(12,30);

  cout << "coding.." << endl;
  coding.show();

  cout << "fixing .. " << endl;
  fixing.show();

  //Time sum = coding.Sum(fixing);
  Time sum = coding + fixing;

  cout << "sum.." << endl;
  sum.show();

  cout << "mult " << endl;
  Time adjust = coding * 2;
  adjust.show();

  adjust = 2 * coding;
  adjust.show();

  return 0;
}