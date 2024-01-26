#include <iostream>

using namespace std;

void show(const string *pt,int size);

const int SIZE = 5;
int main(void)
{
  string list[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    cout << "Enter the " << i + 1 << " favorite food :";
    getline(cin,list[i]);
  }

  show(list,SIZE);
  
  return 0;
}

void show(const string *pt,int size)
{
  cout << "Your list:" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << pt[i] << endl;
  }
  
}