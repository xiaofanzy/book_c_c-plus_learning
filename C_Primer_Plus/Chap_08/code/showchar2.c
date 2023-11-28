#include <stdio.h>

void display(char ch,int r,int c);

int main(void)
{
	int ch;
	int rows,cols;

	printf("Please enter the charater and two integers.\n");

	while((ch = getchar()) != '\n')
	{
		if(scanf("%d%d", &rows, &cols) != 2)
		{
			printf("Error.\n");
			continue;
		}

		display(ch,rows,cols);

		while(getchar() != '\n');

		printf("Enter again.\n");

	}

	return 0;
}

void display(char ch,int r,int c)
{
	int index_r,index_c;

	for(index_r = 1;index_r <= r;index_r++)
	{
		for(index_c = 1; index_c <= c;index_c++)
			printf("%c",ch);

		printf("\n");
	}

}
