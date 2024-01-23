#include <iostream>

using namespace std;
void show(char ch,int t);

int main(void)
{

  char ch;

  cout << "Enter a character:";
  cin.get(ch);

  while (ch != 'q')
  {
    int times;
    cout << "Enter the time the " << ch << " will be follow." << endl;
    cin >> times;
  
    show(ch,times);
    cout << "Enter another characters:";
    cin.get(ch);
  }
  
  return 0;
}

void show(char ch,int t)
{
  while (t-- > 0)
  {
    cout << ch << " ";
  }
  cout << endl;
}