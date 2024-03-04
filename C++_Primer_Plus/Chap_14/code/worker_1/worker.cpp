#include "worker.h"

void Worker::Get()
{
	cout << "Enter the name:";
	getline(cin,fullname);
	cout << "Enter the id:";
	cin >> id;
	while(cin.get() != '\n');
}

void Worker::Data() const
{
	cout << "Fullname : " << fullname << endl;
	cout << "id : " << id  << endl;
}

void Waiter::Get()
{
	cout << "Enter the panache:";
	cin >> panache;
	while(cin.get() !='\n');
}

void Waiter::Data() const
{
	cout << "panache : " <<panache << endl;
}

void Waiter::Set()
{
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	Worker::Data();
	Data();
}

const char *Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Get()
{
	int i;
	for(int i = 0;i < Vtypes; i++)
	{
		cout << i << ":" << pv[i];
		if(i % 4 == 3)
			cout << endl;
	}

	if(i % 4 != 0)
		cout <<endl;

	cout << "Enter a value >= 0 and <" << Vtypes << endl;
	cin >> voice;

	while(cin.get() !='\n'); 
}


void Singer::Data() const
{
	cout << "Voice : " << voice << endl;
}

void Singer::Set()
{
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	Worker::Data();
	Data();
}


void SingerWaiter::Set()
{
	Worker::Get();
	Waiter::Get();
	Singer::Get();
}

void SingerWaiter::Show() const
{
	Worker::Data();
	Waiter::Data();
	Singer::Data();
}
