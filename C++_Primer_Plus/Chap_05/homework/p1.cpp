#include <iostream>

int main(void)
{
  using namespace std;

  int fisrt_num,second_num;

  cout << "enter the first num:";
  cin >> fisrt_num;

  cout << "enter the second num:";
  cin >> second_num;

  int total = 0;

  for (int i = fisrt_num; i <= second_num; i++)
  {
    total+=i;
  }

  cout << "total = " << total << endl;
  
  return 0;
}