#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch))
			printf("%c num is %d\n",ch, tolower(ch) - 'a');
	}
	return 0;
}
