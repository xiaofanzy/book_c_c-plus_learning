#include <stdio.h>
#include <stdbool.h>

#define SPACE ' '

int main(void)
{
	int ch;
	int words=0;
	int characters = 0;
	bool isSpace = false;

	while((ch = getchar()) != EOF)
	{
		if(ch == SPACE)
		{
			if(!isSpace)
			{
				words++;
				isSpace = true;
			}
		}
		else
		{
			if(ch == '\n')
				words++;
			else
				characters++;
			isSpace = false;
		}
	}

	printf("it's has %d words and %d chars and average is %.2f.\n",words,characters, (double)characters / words);

	return 0;
}
