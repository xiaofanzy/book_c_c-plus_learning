#include "worker.h"
#include <cstring>

const int Len = 3;
int main(void)
{
	Worker *pv[Len];

	int i;

	for(i = 0; i< Len; i++)
	{
		char choice;
		cout << "Enter w :waiter s:singer t singing waiter : q:quit.\n";
		cin >> choice;

		while(strchr("wstq",choice) == NULL)
		{
			cout << "Error again.";
			cin >> choice;
		}

		if(choice == 'q')
			break;

		switch(choice)
		{
			case 'w':
				pv[i] = new Waiter;
				break;
			case 's':
				pv[i] = new Singer;
				break;
			case 't':
				pv[i] = new SingerWaiter;
				break;
		}
		while(cin.get() != '\n');
		pv[i]->Set();
	}

	cout <<"\nThis is your staff:.\n";
	for(i = 0; i < Len;i++)
	{
		pv[i]->Show();
		cout << endl;
	}

	for(i = 0; i < Len; i++)
		delete pv[i];

	return 0;
}
