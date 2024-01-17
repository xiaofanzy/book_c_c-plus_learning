#include <iostream>
#include <cstring>
int main(void)
{
  using namespace std;

  int count = 0;

  cout << "enter word:";

  char word[500];

  cin >> word;

  while (strcmp(word,"down"))
  {
    count++;
    cin >> word;
  }

  cout << "total = " << count << endl;
  
  

  
  
  
  
  

  return 0;
}