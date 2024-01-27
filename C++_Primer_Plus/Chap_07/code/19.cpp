#include <iostream>

using namespace std;
const double *f1(const double *ar,int n);
const double *f2(const double ar[],int n);
const double *f3(const double ar[],int n);

int main(void)
{

  double av[3] = {1123.0,1565.11,1549.2};
  const double *(*p1)(const double *,int) = f1;
  auto p2 = f2;

  cout << "Address \t value " << endl;
  cout << p1(av,1) << ": " << *(p1(av,1)) << endl;
  cout << (*p2)(av,2) << ": " << *(*p2)(av,2) << endl; 
  cout << "------------------------\n";
  const double *(*pa[3])(const double *,int) = {f1,f2,f3};
  auto pb = pa;

  for (int i = 0; i < 3; i++)
  {
    cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
  }

  for (int i = 0; i < 3; i++)
  {
    cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;
  }
  
  auto pc = &pa;
  const double *(*(*pd)[3])(const double *,int) = &pa;
  cout << "------------------------\n";
  cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
  const double *pdb = (*pd)[1](av,3);
  cout << pdb << ": " << *pdb << endl;
  cout << (*pd)[2](av,3) << ": " << *(*pd)[2](av,3) << endl;
  cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av,3) << endl;
  

  return 0;
}

const double *f1(const double *ar,int n)
{
  return ar;
}

const double *f2(const double ar[],int n)
{
  return ar + 1;
}

const double *f3(const double ar[],int n)
{
  return ar + 2;
}