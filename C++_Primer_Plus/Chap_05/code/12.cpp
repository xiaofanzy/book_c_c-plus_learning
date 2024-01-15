#include <iostream>
#include <cstring>

int main(void)
{
  using namespace std;

  char word[5] = "?ate";

  for(char ch = 'a';strcmp(word,"mate");ch++)
  {
    cout << word << endl;
    word[0] = ch;
  }

  cout << "Aftet loop :" << word << endl;
  

  return 0;
}