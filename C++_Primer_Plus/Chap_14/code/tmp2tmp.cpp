#include <iostream>

using namespace std;

template<class V>
void counts();

template<class U>
void reports(U &);

template<class T>
class HasFriend
{
private:
  T item;
  static int ct;
public:
  HasFriend(const T &i) : item(i){ct++;}
  ~HasFriend(){ct--;}
  friend void counts<T>();
  friend void reports<HasFriend<T>>(HasFriend<T> &);
};

template<class T>
int HasFriend<T>::ct = 0;

template<class V>
void counts()
{
  cout << "double " << HasFriend<V>::ct << endl;
}

template<class U>
void reports(U &hf)
{
  cout << hf.item << endl;
}

int main(void)
{
  HasFriend<int> hfi1(10);
  counts<int>();
  reports(hfi1);

  HasFriend<int> hfi2(3);
  reports(hfi2);
  counts<int>();

  HasFriend<double> hdb(10.0);
  reports(hdb);
  counts<double>();

  return 0;
}