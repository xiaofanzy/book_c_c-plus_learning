#include <iostream>
#include <format>

struct Employee
{
  char firstInitital;
  char lastInitital;
  int employeeNumber;
  int salary{75000};
};

bool isExists(Employee e)
{
  return false;
}

int main(int argc, char const *argv[])
{
  // 指针必须赋予值,如果不想当时就附内存,那么先指向到nullptr;
  int * myIntegerPointer{nullptr};

  // 空指针,在bool 中会被转换为false;
  if (!myIntegerPointer)
  {
    std::cout << "1" << std::endl;
  }
  
  myIntegerPointer = new int;

  *myIntegerPointer = 8;

  delete myIntegerPointer;
  myIntegerPointer = nullptr;

  Employee *e = new Employee();
  std::cout << e->employeeNumber << std::endl;

  delete e;

  // 使用短路逻辑,
  bool isValidSalary{
    (e && e->salary > 0)
  };

  // 动态分配的数组
  int arrSize{8};
  int* myVariableSizeArray{new int[arrSize]};

  delete[] myVariableSizeArray;

  

  
  return 0;
}


