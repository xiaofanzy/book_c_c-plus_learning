#include <iostream>

int main(void)
{
  using namespace std;

  const int sec_per_min = 60;
  const int min_per_hour = 60;
  const int hour_per_day = 24;

  long long seconds;
  cout << "Enter the number of secondes:";
  cin >> seconds;

  int left_sec = seconds % sec_per_min;
  long long min = seconds / sec_per_min;
  long long hour = min / min_per_hour;
  min = min % min_per_hour;
  long long day = hour / hour_per_day;
  hour = hour % min_per_hour;

  cout << seconds << " seconds = " << day << " days," << hour << " hours," << min << " minutes, " << left_sec << " seconds." << endl;

  return 0;
}