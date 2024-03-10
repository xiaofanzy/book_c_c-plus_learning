#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

template <class T>
class TooBid
{
private:
  T cutoff;
public:
  TooBid(const T &t) :cutoff(t){};
  bool operator()(const T &t){return t > cutoff;}
  ~TooBid(){};
};

void out(int r)
{
  cout << r << " ";
}

int main(int argc, char const *argv[])
{
  TooBid<int> f100(100);
  int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

  list<int> ya(vals,vals + 10);
  list<int> etc(vals,vals + 10);

  ostream_iterator<int,char> outint(cout," ");
  for_each(ya.begin(),ya.end(),out);
  cout << endl;

  ya.remove_if(TooBid<int>(200));
  for_each(ya.begin(),ya.end(),out);
  cout << endl;
  etc.remove_if(f100);
  for_each(etc.begin(),etc.end(),out);
  cout << endl;



  return 0;
}
