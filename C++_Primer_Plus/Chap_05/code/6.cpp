#include <iostream>

int main(void)
{
  using namespace std;

  string words = "Hello World";

  for(int i = words.size() - 1; i >= 0;i--)
    cout << words[i];
  
  cout << endl;


  return 0;
}