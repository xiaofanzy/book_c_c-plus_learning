#include <iostream>
#include <string>

using namespace std;

template<class T1,class T2 = int>
class pairs
{
  private:
    T1 a;
    T2 b;
  public:
    pairs(const T1 &t1,const T2 &t2) : a(t1),b(t2){};
    T1 &first(){return a;}
    T2 &secode(){return b;}
    T1 first() const {return a;}
    T2 secode() const {return b;}
};

int main(void)
{

  pairs<string,int> pas[2] = {
    pairs<string,int>("Tomss",1),
    pairs<string>("Tosss",2)
  };

  int size_pa = sizeof(pas) / sizeof(pairs<string,int>);
  for (int i = 0; i < size_pa; i++)
  {
    cout << "pairs = " << pas[i].first() << " " << pas[i].secode() << endl;
  }

  pas[1].first() = "Jake";
  pas[1].secode() = 5;

  cout << "pairs = " << pas[1].first() << " " << pas[1].secode() << endl;
  
  return 0;
}