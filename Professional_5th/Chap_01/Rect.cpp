#include <iostream>

using namespace std;

class Rect
{
private:
  size_t m_width{0},m_height{0};
public:
  constexpr Rect(size_t width,size_t height) : m_width(width),m_height(height){};
  constexpr size_t getArea() const {return m_width * m_height;}
  ~Rect(){};
};


int main(int argc, char const *argv[])
{
  Rect r {8,2};
  int myArray[r.getArea()];
  return 0;
}
