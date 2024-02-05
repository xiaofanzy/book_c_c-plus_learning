#include <iostream>

using namespace std;

template <typename T>
void Swap(T ar1[],T ar2[],int size);

template <typename T>
void show(T arr[],int n);

int main(void)
{
  const int LIM = 6;
  int d1[LIM] = {1,2,3,4,5,6};
  int d2[LIM] = {4,5,6,7,8,90};

  show(d1,LIM);
  show(d2,LIM);

  Swap(d1,d2,LIM);
  show(d1,LIM);
  show(d2,LIM);

  return 0;
}

template <typename T>
void show(T arr[],int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  
}

template <typename T>
void Swap(T ar1[],T ar2[],int size)
{
  int temp;
  for (int i = 0; i < size; i++)
  {
    temp = ar2[i];
    ar2[i] = ar1[i];
    ar1[i] = temp;
  }
}