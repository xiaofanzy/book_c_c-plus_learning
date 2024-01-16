#include <iostream>

int main(void)
{
  using namespace std;

  char ch;
  int count = 0;

  do
  {
    cout << ch;
    ++count;
    cin.get(ch);
  } while (ch != '#');
  
  cout << endl << "Enter" << count << " characters read.\n";

  return 0;
}