#include <stdio.h>

void showline(char ch,int n,int m);

int main(void)
{
	
	int ch;
	int num1,num2;

	printf("ch is .\n");
	ch = getchar();

	printf("Two number is:");
	scanf("%d%d", &num1, &num2);

	showline(ch,num1,num2);


	return 0;
}

void showline(char ch,int n,int m)
{
	int index_x,index_y;

	for(index_x = 0; index_x < n;index_x++)
	{
		for(index_y = 0;index_y < m;index_y++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
