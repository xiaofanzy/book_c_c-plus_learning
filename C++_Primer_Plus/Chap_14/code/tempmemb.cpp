#include <iostream>

using namespace std;

template<class T>
class beta
{
private:
  template<class V>
  class hold
  {
  private:
    V val;
  public:
    hold(V v = 0) : val(v){};
    void show() const {cout << val << endl;}
    V value() const {return val;}
    ~hold(){};
  };
  hold<T> p;
  hold<int> n;
  
public:
  beta(T t,int i) : p(t),n(i){};
  void Show() const {p.show();n.show();}
  template<class U>
  U blab(U u,T t){return (p.value() + n.value()) * u / t;}
  ~beta(){};
};


int main(void)
{

  beta<double> b1(10.0,5);
  b1.Show();
  cout << "----------" << endl;
  beta<int> b2(10,5);
  b2.Show();
  cout << "------------" << endl;
  cout << b1.blab(2.3,5.0) << endl;
  b1.Show();

  return 0;
}

