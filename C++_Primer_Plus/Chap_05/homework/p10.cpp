#include <iostream>

int main(void)
{
  using namespace std;

  int start;

  cout << "Enter the number:";
  cin >> start;

  int stars[start][start];

  for (int i = 1; i <= start; i++)
  {
   for (int j = start; j > i; j--)
   {
    cout << " ";
   }

   for (int j = i; j > 0; j--)
   {
      cout << "*";
   }
   cout << endl;
   
  }
  

 
  
  
  
  



  return 0;
}