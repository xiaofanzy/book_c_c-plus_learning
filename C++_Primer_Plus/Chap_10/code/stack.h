#ifndef __STACK_H__
#define __STACK_H__

typedef unsigned long Item;

class Stack
{
private:
  enum {MAX = 10};
  Item item[MAX];
  int top;
public:
  Stack(/* args */);
  ~Stack();
  bool isempty();
  bool isfull();
  bool push(Item &i);
  bool pop(Item &i);
};
#endif