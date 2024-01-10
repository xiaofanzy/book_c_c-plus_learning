#include <iostream>
#include <cstring>

int main(void)
{
  using namespace std;

  char animal[20] = "bear";
  const char * bird = "wren";
  char *ps;

  cout << animal << endl;
  cout << bird << endl;
  cin >> animal;
  ps = animal; 
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl; 

  cout << " if i used strcpy method to copy animal to ps" << endl;
  ps = new char(strlen(animal) - 1);
  strcpy(ps,animal);

  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl; 

  delete [] ps;

  return 0;
}