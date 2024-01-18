#include <iostream>

using namespace std;

const char *pt[5] = {
  "Perfect",
  "good",
  "Just so so",
  "TMD",
  "Gold"
};

int main(void)
{

  int score,index;

  cout << "enter the score:";
  cin >> score;

  if (score > 98 && score < 100)
  {
    index = 1;
  }
  else if (score < 98 && score > 60)
  {
    index = 2;
  }
  else if (score < 60 && score > 30)
  {
    index = 3;
  }
  else if (score < 30 && score > 10)
  {
    index = 4;
  }
  else
  {
    index = 5;
  }
  
  cout << "you score is " << pt[index - 1] << endl;
   
  
  
  


  return 0;
}