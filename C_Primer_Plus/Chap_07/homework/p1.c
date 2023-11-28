#include <stdio.h>

#define SPACE ' '
#define ENTER '\n'
#define STOP '#'

int main(void)
{

	int ch;
	int space_count = 0;
	int enter_count = 0;

	while((ch = getchar()) != STOP)
	{
		if(ch == SPACE)
			space_count++;
		else if(ch == ENTER)
			enter_count++;
	}

	printf("it's has %d space and %d enter.\n", space_count, enter_count);

	return 0;
}
