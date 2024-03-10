#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;


typedef int KeyType;
typedef pair<KeyType,string> Pair;
typedef multimap<KeyType,string> MapCode;
int main(int argc, char const *argv[])
{
  
  MapCode codes;

  codes.insert(Pair(10,"Beijing"));

  cout << codes.count(10) << endl;

  MapCode::iterator pi;

  for(pi = codes.begin();pi != codes.end();pi++)
  {
    cout << pi->first << " " << pi->second << endl;
  }

  pair<MapCode::iterator,MapCode::iterator> range = codes.equal_range(10);
  for(pi = range.first;pi!= range.second;pi++)
  {
    cout << (*pi).first << (*pi).second << endl;
  }





  return 0;
}
