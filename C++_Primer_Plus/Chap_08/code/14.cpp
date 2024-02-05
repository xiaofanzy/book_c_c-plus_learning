#include <iostream>

using namespace std;

template<typename T>
void show(T ar[],int size);

template <typename T>
void show(T *ar[],int size);

struct job
{
  char name[40];
  double salary;
};


int main(void)
{
  int things[5] = {1,2,3,4,5};

  show(things,5);

  job jobs[3] = {
    "Tom",100.0,
    "Jerry",200.0,
    "Catty",3.0
  };

  double *ps[3];

  for (int i = 0; i < 3; i++)
  {
    ps[i] = &jobs[i].salary;
  }

  show(ps,3);
  

  return 0;
}

template<typename T>
void show(T ar[],int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << ar[i] << " ";
  }
  cout << endl;
  
} 

template <typename T>
void show(T *ar[],int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << *ar[i] << " ";
  }
  cout << endl;
}