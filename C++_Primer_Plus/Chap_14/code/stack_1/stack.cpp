#include "stack.h"
#include <string>
#include <cctype>
#include <iostream>

using namespace std;
const int NUM = 10;
int main(void)
{
	int nextin = 0;
	int processed = 0;
	Stack<const char *> st;

	const char *in[NUM] = 
	{
		"1.tom","2.jake","3.tt","4.hello","5.joinjoin","6.aaa","7.bbb","8.sds","9.dwew","10.sdssd"	
	};

	while (!st.isfull())
	{
		st.push(in[nextin++]);
	}
	const char *out[NUM];
	while (!st.isempty())
	{
		st.pop(out[processed++]);
	}

	for (int i = 0; i < processed; i++)
	{
		cout << out[i] << endl;
	}
	
	
	

	


	return 0;


}

