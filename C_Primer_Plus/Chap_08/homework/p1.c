#include <stdio.h>

int main(void)
{
	int ch;
	int total = 0;

	while((ch = getchar()) != EOF)
	{
		putchar(ch);
		total++;
	}

	printf("The total is %d.\n",total);

	return 0;
}
