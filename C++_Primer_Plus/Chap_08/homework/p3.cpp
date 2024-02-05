#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void getUpper(string &str);

int main(void)
{
	string str;
	
	cout << "Enter a string (q to quit):";
	getline(cin,str);

	getUpper(str);


}

void getUpper(string &str)
{
	int size = sizeof(str);
	for(int i = 0; i < size; i++)
	{
		if(str[i].islower())
			str[i] = toupper(str[i]);
	}
}
