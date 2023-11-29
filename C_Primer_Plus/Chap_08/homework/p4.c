#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int ch;
	int char_count = 0;
	int word_count = 0;
	bool is_space = false;

	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch))
		{
			char_count++;
			is_space = false;
		}
		else
		{
			if((isspace(ch) || ispunct(ch)) && !is_space)
			{
				word_count++;				
				is_space = true;
			}
		}

	}

	printf("The ch has %d words and %d chars and average is %.2f\n",word_count, char_count, (double)char_count / word_count);
	return 0;
}

