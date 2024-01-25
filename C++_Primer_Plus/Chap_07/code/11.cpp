#include <iostream>

using namespace std;

const int Mines_Per_Hour = 60;

struct costtime
{
  int hour;
  int minutes;
};
void showcost(costtime t);
costtime sumconst(costtime d1,costtime d2);
int main(void)
{
  costtime day1 = {5,55};
  costtime day2 = {4,35};

  costtime trip = sumconst(day1,day2);
  showcost(trip);
  costtime day3 = {10,1};
  showcost(sumconst(trip,day3));


  return 0;
}

costtime sumconst(costtime d1,costtime d2)
{
  costtime reuslt;
  reuslt.hour = d1.hour + d2.hour + (d1.minutes + d2.minutes) / Mines_Per_Hour;
  reuslt.minutes = (d1.minutes + d2.minutes) % Mines_Per_Hour;

  return reuslt;
}

void showcost(costtime t)
{
  cout << "it has cost " << t.hour << " hours " << t.minutes << " minus." << endl;
}