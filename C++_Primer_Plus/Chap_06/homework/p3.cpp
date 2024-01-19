#include <iostream>

using namespace std;

void showmenu();

int main(void)
{
  char choose;
  showmenu();

  cout << "Please enter a c, p, t, or g: ";
  cin.get(choose);

  while(choose != 'f')
    {
      switch(choose)
        {
          case 'c':
            cout << "A maple is a carnivore.\n";
            break;
          case 'p':
            cout << "A maple is a pianist.\n";
            break;
          case 't':
            cout << "A maple is a tree.\n";
            break;
          case 'g':
            cout << "A maple is a game.\n";
            break ;
          default:  
            cout << "Please enter a c, p, t, or g: ";
            break;
        }
      cin.get(choose);
    }
  



  return 0;
}


void showmenu(void)
{
  cout << "Please enter one of the following choices:\n"
       << "c) carnivore\t\tp) pianist\n"
       << "t) tree\t\t\tg) game\n"
        << "f) quit\n";
}
