#include <iostream>

using namespace std;
double rec_sum(int num1,int num2);

int main(void)
{
  int num1,num2;
  cout << "Enter two number if 0 quit:";
  
  while (cin >> num1 >> num2)
  {
    if (num1 == 0 || num2 == 0)
    {
      break;
    }
    
    double result = rec_sum(num1,num2);
    cout << "The result = " << result << endl;
    cout << "Please enter another two numbers:";
  }
  
  return 0;
}

double rec_sum(int num1,int num2)
{
  return 2.0 * num1 * num2 / (num1 + num2);
}