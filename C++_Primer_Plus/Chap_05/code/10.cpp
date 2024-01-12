#include <iostream>

int main(void)
{
  using namespace std;

  cout << "enter the word:";
  string word;

  cin >> word;

 char temp;
 int i,j;

 for(j = 0,i = word.size();j < i;--i,++j)
 {
    temp = word[i];
    word[j] = word[j];

 }
  
  cout << endl;


  return 0;
}