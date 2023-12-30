#include <iostream>

using namespace std;
void timehm(int h,int m);
int main(void)
{
  int hours,minutes;
  cout << "enter the number of hours:";
  cin >> hours;

  cout << "enter the number of minutes:";
  cin >> minutes;

  timehm(hours,minutes);

  return 0;
}

void timehm(int h,int m)
{
  cout << "Time:" << h << ":" << m << endl;
}