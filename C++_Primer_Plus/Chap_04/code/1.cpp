#include <iostream>

int main(void)
{
  using namespace std;

  int yams[3] = {5,6,7};
  int yamsconst[3] = {20,30,40};

  cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
  cout << "The package with " << yams[0] << " consts " << yamsconst[0] << " cents per yam." << endl;
  cout << "the total yam expense is " << yamsconst[0] + yamsconst[1] + yamsconst[2] << " cents." << endl;
  cout << "Size of yams array " << sizeof(yams) << " bytes." << endl;
  cout << "size of one element " << sizeof(yams[0]) << " bytes." << endl;

  return 0;
}