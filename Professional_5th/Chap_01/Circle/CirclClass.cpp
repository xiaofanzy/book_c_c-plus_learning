struct CircleStruct
{
  int x,y;
  double radius;
};

class CircleClass
{
private:
  int m_x,m_y;
  double m_radius;
public:
  CircleClass(int x,int y,double radius){m_x = x;m_y = y;m_radius = radius;};
  ~CircleClass(){};
};

int main(int argc, char const *argv[])
{
  // c++ 11
  CircleStruct myst1 = {10,10,2.5};
  CircleClass myst2(1,2,3);

  CircleClass myst3 = {10,10,2.5};
  CircleClass myst4 = {10,10,2.5};

  return 0;
}

