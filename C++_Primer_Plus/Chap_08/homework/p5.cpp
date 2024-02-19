#include <iostream>

using namespace std;

template <typename T>
T max5(T t[]);

int main(void)
{
  int arr_i[5] = {1,2,3,4,5};
  double arr_d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};  

  cout << max5(arr_i) << endl;
  cout << max5(arr_d) << endl;

  return 0;
}

template <typename T>
T max5(T t[])
{
  T max = t[0];
  for (int i = 1; i < 5; i++)
  {
    if (max < t[i])
    {
      max = t[i];
    }
    
  }
  return max;
}