#include <iostream>
#include <string>
#include<memory>
using namespace std;

class Replate
{
private:
  string name;
public:
  Replate(const string &_name) : name(_name){};
  void show(){cout << name << endl;}
  ~Replate(){cout << "xigou is use" << endl;};
};


int main(int argc, char const *argv[])
{
  unique_ptr<Replate> ps(new Replate("do you love me?"));
  ps->show();
  return 0;
}
