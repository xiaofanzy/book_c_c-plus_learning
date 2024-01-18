#include <iostream>

int main(void)
{
  using namespace std;

  char ch;
  int space = 0;
  int total = 0;

  cin.get(ch);

  while (ch != '.')
  {
    if (ch == ' ')
    {
      space++;
    }
    total++;
    cin.get(ch);
  }
  
  cout << "space = " << space << endl;
  cout << "total characters = " << total << endl;
  

  return 0;
}