#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	int ch;

	while((ch = getchar()) != EOF)
	{
		printf("%d",toascii(ch));
	}

	return 0;
}
