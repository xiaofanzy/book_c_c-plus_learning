export module employee;
#include <string>
namespace Records
{
  const int DefaultStaringSalary{3000};
  export const int DefaultRaiseAndDemeritAmount{1000};

  export class Employee
  {
    private:
        std::string m_firstName;
        std::string m_lastName;
        int m_employeeNumber{-1};
        bool m_hired{false};
        int m_salary {DefaultStaringSalary};
    public:
        Employee(const std::string& m_firstName,const std::string& lastName);
        void promote(int raiseAmound = DefaultRaiseAndDemeritAmount);
        void demote(int demeritAmount = DefaultRaiseAndDemeritAmount);
        void hire();
        void fire();
        void display() const;

        void setFirstName(const std::string & fristname);
        const std::string& getFirstName() const;

        void setLastName(const std::string &lastName);
        const std::string &getLastName() const;

        void setEmployeeNumber(int employeeNUmber);
        int getEmployeeNumber() const;

        void setSalary(int newSalary);
        int getSalary() const;

        bool isHired() const;
  };

}