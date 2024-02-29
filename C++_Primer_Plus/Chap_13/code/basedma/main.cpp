#include "dma.h"


int main(void)
{
  BaseDma ba("Tom",56.12);
  cout << "----------------" << endl;
  cout << ba << endl;
  cout << "----------------" << endl;
  LackDma ld("TT",45.0,"White");
  LackDma ld1(ld);
   
  cout << ld;
  cout << "----------------" << endl;
  cout << ld1;

  cout << "----------------" << endl;
  HasDma hd("AA",55.0,"cl");
  cout << hd;
  cout << "----------------" << endl;
  // 这里调用了复制构造函数
  HasDma hd1 = hd;
  HasDma hd2;
  // 这里调用的方法是 = 
  hd2 = hd;

  cout << hd1;
  cout << "----------------" << endl;
  cout << hd2;
  cout << "----------------" << endl;


  return 0;
}