#include "queue.h"

int main(void)
{
  int qs;
  Customer temp;
  int i = 0;
  int customer = 0;
  cout << "Enter the max size of queue:";
  cin >> qs;

  Queue line(qs);

  while (!line.isfull())
  {
    temp.set(i++);
    line.enqueue(temp);
    customer++;
  }

  cout << " customers :" << customer << endl;

  while (!line.isempty())
  {
    line.dequeue(temp);
    customer--;
  }
  cout << " customers :" << customer << endl;

  

  return 0;
}

