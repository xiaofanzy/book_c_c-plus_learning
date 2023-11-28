#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main(void)
{
	char ch[SIZE];
	int char_size = 0;
	int state = 0;

	scanf("%s", ch);

	char_size = strlen(ch);
	printf("%d.\n",char_size);

	for(state = 0; state < char_size;state++)
	{
		if(ch[state] == '#')
			break;

		printf("%c %d",ch[state],ch[state]);
		if(state % 8 == 0)
			printf("\n");

		
	}

	return 0;
}
