#include <iostream>

using namespace std;

int fill_array(double p[],int s);
void revalue(double p[],double fa,int size);
void show_array(const double p[],int size);

const int SIZE = 5;

int main(void)
{
  double properties[SIZE];

  int size = fill_array(properties,SIZE);

  show_array(properties,size);

  if (size > 0)
  {
    cout << "Enter the factor:";
    double factor;

    while (!(cin >> factor))
    {
      cin.clear();
      while (cin.get() != '\n')
      {
        continue;
      }
      cout << "Please enter a suit value:";
    }
    revalue(properties,factor,size);
    show_array(properties,size);
  }
  
  cout << "Bye!" << endl;

  return 0;
}

int fill_array(double p[],int s)
{
  double temp;
  int i = 0;
  for (i = 0; i < s; i++)
  {
    cout << "Enter the value #" << i + 1 << ":";
    while(!(cin >> temp))
    {
      cin.clear();
      while (cin.get() != '\n')
      {
        continue;
      }
      break;
    }
    
    if (temp < 0)
    {
      break;
    }
    else
    {
      p[i] = temp;
    }
  }
  return i;
}

void show_array(const double p[],int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Property $" << i + 1 << ":" << p[i] << endl;
  }
}

void revalue(double p[],double fa,int size)
{
  for (int i = 0; i < size; i++)
  {
    p[i] *= fa;
  }
}