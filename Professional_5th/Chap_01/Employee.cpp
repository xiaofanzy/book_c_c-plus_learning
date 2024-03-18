

struct Employee
{
  char firstInitital;
  char lastInitital;
  int employeeNumber;
  int salary{75000};
};

#include <iostream>
#include <format>

int main(int argc, char const *argv[])
{
  Employee anEmployee{'a','b',45,888};

  /* 指派类初始化: 
    1. 点开始;顺序和Private 的顺序相同;
    2. 拥有类初始化的数据成员会得到该值,没有内初始化的成员会被零初始化;
  */
  /* Employee bnEmploye{
    .firstInitital = 'a',
    .lastInitital = 'b',
    .employeeNumber = 20,
    .salary =8888
  }; */

  Employee bnEmploye
  {
    .firstInitital = 'a',
    .lastInitital = 'b'
  };

  std::cout << std::format("{} {} {} {}",bnEmploye.firstInitital,bnEmploye.lastInitital,bnEmploye.employeeNumber,bnEmploye.salary) << std::endl;

  return 0;
}

