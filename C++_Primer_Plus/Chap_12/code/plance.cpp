#include <iostream>
#include <string>
#include <cstring>
#include <new>

using namespace std;

const int BUFMAX = 512;

class JustTesting
{
private:
  string words;
  int number;
public:
  JustTesting(const string &s = "Just Testing", int n = 0){
    words = s;
    number = n;
    cout << words << " counstruced.\n";
  };
  void show(){
    cout << words << endl;
  }
  ~JustTesting(){
    cout << words << " destoryed.\n";
  };
};

int main(void)
{
  char *buffer = new char[BUFMAX];
  JustTesting *p1,*p2,*p3,*p4;

  p1 = new JustTesting("Hello",20);
  p2 = new(buffer) JustTesting("ddd",20);

  p2->show();
  p1->show();

  p3 = new JustTesting("Heap2",40);
  p4 = new(buffer + sizeof(JustTesting)) JustTesting();
  
  p3->show();
  p4->show();

  delete p1;
  delete p3;

  p4->~JustTesting();
  p2->~JustTesting();

  delete [] buffer;

  return 0;
}
