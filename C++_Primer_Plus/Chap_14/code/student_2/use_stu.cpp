#include "student.h"

const int s_size = 3;
const int sc_size = 5;

void set(Student &st,int size);

int main(void)
{
  Student std[s_size] = {Student(sc_size),Student(sc_size),Student(sc_size)};
  cout << "Please enter the value : " << endl;
  for (int i = 0; i < s_size; i++)
  {
    set(std[i],sc_size);
  }

  cout << "List " << endl;
  for (int i = 0; i < s_size; i++)
  {
    cout << std[i] << endl;
  }

  return 0;
}

void set(Student &st,int size)
{
  cout << "enter the name:";
  getline(cin,st);
  cout << "Enter the value:" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> st[i];
  }
  while (cin.get() != '\n')
  {
    
  }
  
  
}