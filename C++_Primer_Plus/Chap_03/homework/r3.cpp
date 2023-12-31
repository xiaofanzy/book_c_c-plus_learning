#include <iostream>

int main(void)
{
  using namespace std;

  cout << "enter a latitude in degrees, minutes, and seconds:" << endl;
  cout << "First, enter the degrees: ";
  int degrees;
  cin >> degrees;
  cout << "Next, enter the minutes of arc: ";
  int minutes;
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: ";
  int seconds;
  cin >> seconds;

  const int kSecondsPerMinute = 60;
  const int kMinutesPerDegree = 60;
  const int kSecondsPerDegree = kSecondsPerMinute * kMinutesPerDegree;

  double total_seconds = seconds + minutes * kSecondsPerMinute + degrees * kSecondsPerDegree;
  double total_degrees = total_seconds / kSecondsPerDegree;

  cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << total_degrees << " degrees" << endl;

  return 0;
}