#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
void file_it(ostream &c,const double &obj,const double e[],int n);

const int LIMIT = 5;

int main(void)
{
  fstream fout;
  const char *fn = "ep-data.txt";

  fout.open(fn);

  if (!fout.is_open())
  {
    cout << "can't open " << fn << endl;
    exit(EXIT_FAILURE);
  }

  double objective;
  cout << "Enter the focal length of your telescope objective in mm:";
  cin >> objective;

  double eps[LIMIT];
  
  for (int i = 0; i < LIMIT; i++)
  {
    cout << "EyePieces #" << i + 1 << ": ";
    cin >> eps[i];
  }

  file_it(cout,objective,eps,LIMIT);
  file_it(fout,objective,eps,LIMIT);
 
  cout << "Done" << endl;

  return 0;
}

void file_it(ostream &c,const double &obj,const double e[],int n)
{
  c << "Focal length of objective:" << obj << endl;
  c << "f.1. eyepieces" << " magnification" << endl;

  for (int i = 0; i < n; i++)
  {
    c << "      " << e[i] << "      " << int(obj / e[i] +0.5) << endl;
  }
  
}