#include <iostream>
#include <cctype>

int main(void)
{
  using namespace std;

  char ch;

  cout << "Enter:";
  cin.get(ch);

  int whitespace = 0;
  int digits = 0;
  int chars = 0;
  int punct = 0;


  while (ch != '@')
  {
   if (isalpha(ch))
   {
      chars++;
   }
   else if (isspace(ch))
   {
      whitespace++;
   }
   else if (isdigit(ch))
   {
      digits++;
   }
   else if (ispunct(ch))
   {
      punct++;
   }
  cin.get(ch);  
  }
  
  cout << chars << " chars" << endl;


  return 0;
}