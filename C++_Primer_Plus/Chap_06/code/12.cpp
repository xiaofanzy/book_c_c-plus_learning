#include <iostream>

using namespace std;

const int SIZE = 80;

int main(void)
{
  char word[SIZE];
  int space = 0;
  cout << "enter the word:";
  cin.get(word,SIZE);

  cout << "Complete :" << word << endl;

  for (int i = 0; word[i] != '\0' ; i++)
  {
    cout << word[i];

    if (word[i] == '.')
    {
      break;
    }

    if (word[i] != ' ')
    {
      continue;
    }
    space++;
    
    
  }
  
  cout << endl;

  cout << "it has " << space << " space in the world" << endl;

  return 0;
}