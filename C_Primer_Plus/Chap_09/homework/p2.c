#include <stdio.h>

void chline(char ch,int i,int j);

int main(void)
{
	int ch;
	int i,j;

	printf("Enter the two numbers.\n");
	while((scanf("%d%d",&i, &j)) != 2)
	{
		while(getchar() != '\n')
			scanf("%*s");
	}

	printf("Enter the ch.\n");

	ch = getchar();
	/*while((ch = getchar()) != 'q')
	{
		while(getchar() != '\n');
	}*/
	printf("%c",ch);

	chline(ch, i, j);


	return 0;
}

void chline(char ch, int i, int j)
{
	int index;

	for(index = 0;(index >= i || index <= j);index++)
		printf("%c",ch);


}
