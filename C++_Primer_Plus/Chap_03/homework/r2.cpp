#include <iostream>

int main(void)
{
  using namespace std;
  const double kg_per_bounds = 2.2;
  const double feet_per_m = 0.0254;

  int feet,inches,kg;

  cout << "enter the feet and inches:";
  cin >> feet;
  cin >> inches;

  cout << "Now enter the kg:";
  cin >> kg;

  double m = (feet * 12 + inches) * feet_per_m;
  double bounds = kg / kg_per_bounds;

  double BMI = bounds / (m * m);

  cout << " Your BMI = " << BMI << endl;

  return 0;
}