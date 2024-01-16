#include <iostream>

int main(void)
{
  using namespace std;

  char ch;
  int count = 0;

 /*  do
  {
    cin.get(ch);
    cout << ch;
    ++count;
  } while (cin.fail() == false);  // == false 的时候，会走进去， == true 的时候，就会走出去
   */

  while (cin.get(ch))
  {
    cout << ch;
    ++count;
  }
  
  cout << endl << "Enter " << count << " characters read.\n";

  return 0;
}