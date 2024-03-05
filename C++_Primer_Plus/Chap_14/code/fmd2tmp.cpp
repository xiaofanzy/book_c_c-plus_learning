#include <iostream>

using namespace std;

template<class T>
class HasFriend
{
private:
  T item;
  static int ct;
public:
  HasFriend(const T &i) : item(i){ct++;}
  ~HasFriend(){ct--;}
  friend void counts();
  friend void reports(HasFriend<T> &);
};

template<class T>
int HasFriend<T>::ct = 0;

void counts()
{
  cout << "int " << HasFriend<int>::ct << endl;
  cout << "double " << HasFriend<double>::ct << endl;
}


void reports(HasFriend<int> &hf)
{
  cout << "int hf" << hf.item << endl;
}

void reports(HasFriend<double> &hf)
{
  cout << "double hf " << hf.item << endl;
}

int main(void)
{
  HasFriend<int> hfi1(10);
  reports(hfi1);
  counts();

  HasFriend<int> hfi2(3);
  reports(hfi2);
  counts();

  HasFriend<double> hdb(10.0);
  reports(hdb);
  counts();

  return 0;
}