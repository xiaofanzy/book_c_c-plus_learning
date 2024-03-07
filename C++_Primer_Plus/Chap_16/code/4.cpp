#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string empty;
  string small = "bit";
  string larger = "Elephants are a girl's best friend";

  cout << "empty : " << empty.size() << endl;
  cout << "small :" << small.size() << endl;
  cout << "larger : " << larger.size() << endl;

  cout << "empty :" << empty.capacity() << endl;
  cout << "small : " << empty.capacity() << endl;
  cout << "larger: " << empty.capacity() << endl;

  empty.reserve(50);
  cout << "empty : " << empty.capacity() << endl;

  return 0;
}
