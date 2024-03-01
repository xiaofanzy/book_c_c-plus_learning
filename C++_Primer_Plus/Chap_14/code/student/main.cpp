#include "students.h"

const int puplis = 3;
const int quizzes = 5;

void set(Student &s,int size);

int main(void)
{
  Student ada[puplis] = {Student(quizzes),Student(quizzes),Student(quizzes)};

  for (int i = 0; i < puplis; i++)
  {
    set(ada[i],quizzes);
  }
  
  cout << "\nStudent list:" << endl;
  for (int i = 0; i < puplis; i++)
  {
    cout << ada[i].Name() << endl;
  }

  cout << "\nResult list : " << endl;

  for (int i = 0; i < puplis; i++)
  {
    cout << ada[i];
    cout << "Average : " << ada[i].Average() << endl;
  }

  return 0;
}

void set(Student &s,int size)
{
  cout << "students name : ";
  getline(cin,s);
  cout << " enter the score : ";
  for (int i = 0; i < size; i++)
  {
    cin >> s[i];
  }
  while (cin.get() != '\n')
  {
    /* code */
  }
  
  
}