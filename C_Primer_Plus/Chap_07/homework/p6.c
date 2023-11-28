#include <stdio.h>

int main(void)
{
	char ch_first,ch_last;

	int count = 0;

	while((ch_first = getchar()) != '#')
	{
		//ch_last = ch_first;
		if(ch_last == 'e' && ch_first == 'i')
			count++; 
		ch_last = ch_first;
	}

	printf("it has %d times for character ei.\n", count);

	return 0;
}
