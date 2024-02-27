#include "brass.h"

const int CLIENTS = 3;

int main(void)
{
  Brass *p_clients[CLIENTS];
  string temp;
  long tempnum;
  int kind;
  double tempbal;

  for (int i = 0; i < CLIENTS; i++)
  {
    cout << "Enter the clinet's name: ";
    getline(cin,temp);
    cout << "Enter the clinets account number:";
    cin >> tempnum;
    cout << "Enter the opening balance: $";
    cin >> tempbal;
    cout << "Enter 1 for brass account or enter 2 for BrassPlus Account:";
    while (cin >> kind && (kind != 1 && kind != 2))
    {
      cout << "Enter 1 or 2" << endl;
    }
    if (kind == 1)
    {
      p_clients[i] = new Brass(temp,tempnum,tempbal);
    }
    else
    {
      double tmax,trate;
      cout << "Enter teh overdraft limit : $ ";
      cin >> tmax;
      cout << "Ente the rate";
      cin >> trate;
      p_clients[i] = new BrassPlus(temp,tempnum,tempbal,tmax,trate);

    }

    while (cin.get() != '\n')
    {
      continue;
    }
    
  }

  for (int i = 0; i < CLIENTS; i++)
  {
    p_clients[i]->ViewAcct();
    cout << endl;
  }
  
  for (int i = 0; i < CLIENTS; i++)
  {
    delete p_clients[i];
  }
  


}