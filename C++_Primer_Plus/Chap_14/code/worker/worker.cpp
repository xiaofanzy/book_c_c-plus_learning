#include "worker.h"

void Worker::Set()
{
  cout << "Enter the name : ";
  getline(cin,fullname);
  cout << "enter the id : ";
  cin >> id;
  while (cin.get() != '\n')
  {
    
  }
}

void Worker::Show() const
{
  cout << "Fullname  = " << fullname << endl;
  cout << "id = " << id << endl;
}

void Waiter::Set()
{
  Worker::Set();
  cout << "Enter the panache: ";
  cin >> panache;
  while (cin.get() != '\n')
  {
    
  }
}

void Waiter::Show() const
{
  Worker::Show();
  cout << "panache : " << panache << endl;
}


const char *Singer::pv[] ={"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
  Worker::Set();
  int i;
  for(i = 0; i < Vtypes; i++)
  {
    cout << i << ":" << pv[i];
    if (i % 4 == 3)
    {
      cout << endl;
    }
  }

  if (i % 4 == 0)
  {
    cout << endl;
  }

  cout << "Please enter a value >= 0 and <" << Vtypes << endl;
  cin >> voice;
  while (cin.get() !='\n')
  {
    continue;
  }
  
}

void Singer::Show() const
{
	Worker::Show();
	cout << "Voice range: " << pv[voice] << endl;
}
