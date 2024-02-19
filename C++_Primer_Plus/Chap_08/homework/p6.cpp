#include <iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T pt[],int n);

template <> const char *maxn(const char *pt[],int n);

int main(void)
{
  int arr_i[5] = {1,2,3,4,5};
  double arr_d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};  

  cout << maxn(arr_i,5) << endl;
  cout << maxn(arr_d,5) << endl;

  const char *pt[5] = {"Hello world","Tm","Array","dddd","a"};

  cout << maxn(pt,5) << endl;

  return 0;
}

template <typename T>
T maxn(T pt[],int n)
{
  T max = pt[0];
  for (int i = 1; i < n; i++)
  {
    if (pt[i] > max)
    {
      max = pt[i];
    }
    
  }
  return max;
}

template <> const char *maxn(const char *pt[],int n)
{
  /* int index = 0;
  int max = strlen(pt[0]);
  for (int i = 1; i < n; i++)
  {
    if (strlen(pt[i]) > max)
    {
      index = i;
    }
    
  } */
  int index = 0;

  for (int i = 1; i < n; i++)
  {
    if (strlen(pt[index]) < strlen(pt[i]))
    {
      index = i;
    }
  }
  
  return pt[index];
}