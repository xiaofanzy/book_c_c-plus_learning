#include <iostream>

using namespace std;

struct job
{
  char name[40];
  double salary;
};

template <typename T>
void show(T pt[],int n);

template <typename T>
void show(T *ar[],int n);

template <typename T>
T sumarr(T ar[],int s);

template <typename T>
T sumarr(T *ar[],int n);

int main(void)
{

  int things[5] = {1,2,3,4,5};
  show(things,5);

  job jobs[3] = {
    "Tom",100.0,
    "Jerry",200.0,
    "Catty",3.0
  };

  double *pd[3];

  for (int i = 0; i < 3; i++)
  {
    pd[i] = &jobs[i].salary;
  }
  show(pd,3);

  cout << sumarr(things,5) << endl;
  cout << sumarr(pd,3) << endl;

  return 0;
}

template <typename T>
void show(T pt[],int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << pt[i] << " ";
  }
  cout << " " << endl;
}

template <typename T>
void show(T *ar[],int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << *ar[i] << " ";
  }
  cout << endl;
}

template <typename T>
T sumarr(T ar[],int s)
{
  T total = 0;

  for (int i = 0; i < s; i++)
  {
    total += ar[i];
  }
  return total;
}

template <typename T>
T sumarr(T *ar[],int n)
{
  T total = 0.0;
  for (int i = 0; i < n; i++)
  {
    total += *ar[i];
  }
  return total;
}