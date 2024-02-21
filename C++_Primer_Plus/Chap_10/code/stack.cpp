#include <iostream>
#include "stack.h"

Stack::Stack()
{
  top = 0;
}

Stack::~Stack()
{

}

bool Stack::isempty()
{
  return top == 0;
}

bool Stack::isfull()
{
  return top == MAX;
}

bool Stack::pop(Item &i)
{
  if (top < MAX)
  {
    item[--top] = i;
    return true;
  }
  else
  {
    return false;
  }
}

bool Stack::push(Item &i)
{
  if(top < MAX)
  {
    item[top++] = i;
    return true;
  }
  else
  {
    return false;
  }
}
