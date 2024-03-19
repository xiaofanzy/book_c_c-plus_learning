#include <iostream>

using namespace std;

class Rect
{
private:
  size_t m_width{0},m_height{0};
public:
  constexpr Rect(size_t width,size_t height) : m_width(width),m_height(height){};
  constexpr size_t getArea() const {return m_width * m_height;}
  // 当没有consteval 的时候,再运行时才会执行,编译器不会求值,
  // 当 有consteval 的时候,在运行的时候就需要执行;
  consteval double inchToMm(double inch){return inch * 25.4;}
  
  
  ~Rect(){};
};


int main(int argc, char const *argv[])
{
  Rect r {8,2};
  int myArray[r.getArea()];


  return 0;
}
