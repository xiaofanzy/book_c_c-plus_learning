#include <iostream>

using namespace std;

int main(void)
{

  const int SIZE = 10;
  double arr[SIZE];
  double donation;
  int i = 0;
  double total = 0.0;
  double average = 0.0;

  while (cin >> donation && i < SIZE)
  {
    arr[i++] = donation;
    total += donation;
    if(i + 1 > SIZE)
      break;
  }

  if (i > 0)
  {
    average = total / i;
  }

  int less = 0;

  for (int j = 0; j <= i; j++)
  {
    if (arr[j] > average)
    {
      less++;
    }
  }

  cout << " average = " << average << " and has " << less << " number is bigger than average:" << endl;

  
  
  
  
  


  


  return 0;
}