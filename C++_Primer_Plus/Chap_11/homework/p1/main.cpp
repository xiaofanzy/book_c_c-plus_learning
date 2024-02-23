#include "vector.h"
#include <ctime>

using namespace VECTOR;

int main(void)
{

  double target;
  double dstep;
  Vector result(0.0,0.0);
  double direction;
  Vector step;
  unsigned long steps = 0;

  srand(time(NULL));

  cout << "Enter the target distinct; q to quit:";
  cin >> target;

  while (target > 0)
  {
    cout << "Enter teh step length:";
    if (!(cin >> dstep))
    {
      break;
    }

    cout << "Target Distinct " << target << " , Step Size:" << dstep << endl;
    int i  = 0;
    while (result.magval() < target)
    {
      direction = rand() % 360;
      step.reset(dstep,direction,Vector::POL);
      result = result + step;
      steps++;
      cout << i++ << ":(x,y) = (" <<result.xval() << result.yval() << ")" << endl; 
    }

    cout << "Anfter " << steps << " steps ,the subject has following locaiont:";
    cout << result;

    result.polar_mode();
    cout << result;
    cout << endl;

    steps = 0;
    result.reset(0.0,0.0);
    cout << "Enter target distinct (q to quit)";
  }
  
  cout << "bye.\n";


  return 0;
}