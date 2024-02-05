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
	cout << str << endl;

}

void getUpper(string &str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	
}
