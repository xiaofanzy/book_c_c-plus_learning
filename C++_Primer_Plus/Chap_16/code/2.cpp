#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  ifstream f;
  f.open("abc.txt");

  if(f.is_open() == false)
  {
    cout << "can/t open files." << endl;
    exit(EXIT_FAILURE);
  }

  string item;
  int count = 0;
  getline(f,item,':');

  while (f)
  {
    ++count;
    cout << count << " " << item << endl;
    getline(f,item,':');
  }

  cout << "Bye bye";
  

  





  return 0;
}
