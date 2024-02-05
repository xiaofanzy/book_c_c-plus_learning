#include <iostream>

using namespace std;

struct box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};
void send_address(box *pt);
void send_value(const box b);

int main(void)
{
  box box1 = {"Tom",11.0,12.0,13.0,14.0};

  send_value(box1);
  send_address(&box1);

  return 0;
}

void send_value(const box b)
{
  cout << b.maker << b.height << b.length << b.volume << b.width << endl;
}

void send_address(box *pt)
{
  pt->volume = pt->height * pt->length * pt->width;
}

