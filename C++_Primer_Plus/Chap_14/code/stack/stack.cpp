#include "stack.h"
#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main(void)
{
	char ch;
	string po;
	Stack<string> st;

	cout << "Please enter a to push to stack.\n";
	cout << "P to pop from stack,Q to quit.\n";

	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n');
		
		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a string you want to push to stack:\n";
				cin >> po;
				if(st.isfull())
					cout << "Stack already full" << endl;
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if(st.isempty())
					cout << "Stack is empty" << endl;
				else
				{
					st.pop(po);
					cout << po << " is poped" << endl;
				}
				break;
		}
	cout << "Please etner A to push to stack, \n"
	     << "P to pop from stack, Q to quit.\n";
	}
	

	return 0;


}

