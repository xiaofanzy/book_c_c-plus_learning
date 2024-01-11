#include <iostream>
#include <array>
int main(void)
{
  using namespace std;

  array<float,3> score;
  float sumtotal;

  cout << "Enter three scores:";

  for (int i = 0; i < 3; i++)
  {
    cin >> score[i];
    cout << "The " << i+ 1 << " times score is " << score[i] << "." << endl; 
    sumtotal += score[i];
  }
  cout << "total =  " << sumtotal  << endl;
  cout << "average = " << sumtotal / 3 << endl;



  



  return 0;
}