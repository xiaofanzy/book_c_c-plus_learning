#include "queue.h"

void Customer::set(long processtime)
{
  this->processtime = processtime;
}

Queue::Queue(int qs) : qsize(qs)
{
  front = rear = NULL;
  items = 0;
}

Queue::~Queue()
{
  Node *temp;

  while (front != NULL)
  {
    temp = front;
    front = front->next;
    delete temp;
  }
}

bool Queue::isempty() const
{
  return items == 0;
}

bool Queue::isfull() const 
{
  return items == qsize;
}


int Queue::queuecount() const
{
  return items;
}

bool Queue::enqueue(const Item &item)
{
  if(isfull()){
    return false;
  }

  Node *temp = new Node;
  temp->item = item;
  temp->next = NULL;
  items++;

  if (front == NULL)
  {
    front = temp;
  }
  else
  {
    rear->next = temp;
  }
  rear = temp;
  
  return true;
}


bool Queue::dequeue(Item &item)
{
  if (front == NULL)
  {
    return false;
  }

  item = front -> item;
  items--;

  Node *temp = new Node();
  front = front ->next;
  delete temp;

  if (items == 0)
  {
    rear = NULL;
  }
  
  return true;
}
