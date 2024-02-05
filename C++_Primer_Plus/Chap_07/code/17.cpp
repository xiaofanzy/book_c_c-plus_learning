#include <iostream>

using namespace std;

const int SIZE = 66;
void subtite(char ch[],int min, int max,int level);
const int Divs = 6;
int main(void)
{
  char chList[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    chList[i] = ' ';
  }

  chList[0] = chList[SIZE - 2] = '|';
  chList[SIZE - 1] = '\0';
  cout << chList << endl;
  for (int i = 1; i <= Divs; i++)
  {
    subtite(chList,0,SIZE - 2,i);
    cout << chList << endl;
  }
  
}

void subtite(char ch[],int min, int max,int level)
{
  if (0 == level)
  {
    return;
  }

  int mid = (min + max) / 2;
  ch[mid] = '|';
  subtite(ch,min,mid,level - 1);
  subtite(ch,mid,max,level - 1);

}