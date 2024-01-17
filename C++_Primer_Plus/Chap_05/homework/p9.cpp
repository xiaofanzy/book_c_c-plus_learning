#include <iostream>
#include <cstring>
#include <string>
int main(void)
{
  using namespace std;

  int count = 0;

  cout << "enter word:";

  string word;
  string words;
  // 这一步的意思是当读取一个word的时候，放入word中，然后个数++，然后再
  // 读取下一个，利用cin 读取到空格来计算个数；
  cin >> word;

  while (word !="down")
	{
		count++;
		cin >> word;
	}
  

  cout << "total = " << count << endl;
  
  

  
  
  
  
  

  return 0;
}