#include <iostream>

using namespace std;

int main(void)
{
  char * trip = "Hawail";
  unsigned long n = 12345678;
  char *temp;

  for (int i = 0; i < 10; i++)
  {
    cout << left(n,i) << endl;
    temp = left(trip,i);
    cout << temp << endl;
    delete []temp;
  }
  
  return 0;
}

char *left(const char str[],int i)
{

}

unsigned long left(const unsigned long &num,int i)
{
  
}