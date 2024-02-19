#include <iostream>

using namespace std;

int ArSize = 10;
void chartotal(char *pt);

int main(void)
{
  char str[ArSize];
  char next;
  cout << "Enter the line:";

  cin.get(str,ArSize);

  while (cin)
  {
    cin.get(next);
    while (next != '\n')
    {
      cin.get(next);
    }
    chartotal(str);
    cout << "enter the next line: empty to quit:";
    cin.get(str,ArSize);
  }

  cout << "bye!" << endl;
  
}

void chartotal(char *pt)
{
  static int total = 0;
  int count = 0;

  while (*pt++)
  {
    count++;
  }
  total += count;
  
  cout << " This line the line total = " << count << endl;
  cout << "This line the total = " << total << endl;
}