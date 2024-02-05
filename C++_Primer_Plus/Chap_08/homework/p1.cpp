#include <iostream>
#include <string>

using namespace std;

void showstring(string str,int n = 1);

int main(void)
{
	string str;
	cout << "enter the string ";
	getline(cin,str);

	showstring(str,5);
}

void showstring(string str,int n)
{
	for(int i = 0; i < n; i++)
		cout << str << endl;
}

