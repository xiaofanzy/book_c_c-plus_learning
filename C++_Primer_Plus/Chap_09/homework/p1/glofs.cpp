#include <iostream>
#include "golf.h"

using namespace std;

int main(void)
{
  golf golf[3];
  for (int i = 0; i < 3; i++)
  {
    setgolf(golf[i]);
  }

  for (int i = 0; i < 3; i++)
  {
    showgolf(golf[i]);
  }
  
  return 0;
}