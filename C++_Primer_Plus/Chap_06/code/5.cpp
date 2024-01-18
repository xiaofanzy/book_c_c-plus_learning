#include <iostream>


const int ARSIZE = 5;

int main(void)
{
  using namespace std;

  float num[ARSIZE];
  float temp;
  int n = 0;
  cout << "Enter number:";

  cin >> temp;
  
  while (temp > 0 && n < ARSIZE)
  {
    num[n++] = temp;
    cout << "next value:";
    cin >> temp;
  }
   
  int count = 0;
  int j = 0;
  

  if (n == 0)
  {
    cout << "No data--byte." << endl;
  }
  else
  {
    cout << "Enter the values:";
    cin >> temp;
    // 这样做不行的一点是，当为false 的时候跳出循环了
    while (num[j++] > temp)
    {
      count++;
    }
    
    
  }
  
  

  cout << "Thart is " << count << " numbers is bigger than " << temp << endl;
  




  return 0;
}