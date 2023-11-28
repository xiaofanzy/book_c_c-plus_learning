#include <stdio.h>

void count(void);
char get_choice(void);
int get_int(void);
char get_first(void);

int main(void)
{
	int choice;
	
	while((choice = get_choice()) !='q')
	{
		switch(choice)
		{
			case 'a':
				printf("Buy low,and sell high.\n");
				break;
			case 'b':
				printf("\a");
				break;
			case 'c':
				count();
				break;
			default:
				printf("Program error!\n");
				break;
		}
	}

	printf("Bye Bye!\n");

	return 0;
}

void count(void)
{
	int n,i;

	printf("Count how far? Enter an integer:\n");
	n = get_int();

	for(i = 1;i < n; i++)
	{
		printf("%d\n", i);
	}
	
	while(getchar() != '\n');
}

char get_choice(void)
{
	int ch;

	printf("Enter the letter of your choice:\n");
	printf("a.advice		b.bell.\n");
	printf("c.count			d.quit.\n");

	ch = get_first();

	while((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please enter respond a,b,c or q.\n");
		ch = get_first();
	}

	return ch;
}

char get_first(void)
{
	int ch;
	ch = getchar();

	while(getchar() != '\n');

	return ch;
}

int get_int(void)
{
	int input;
	char ch;

	while(scanf("%d", &input) != 1)
	{
		while((ch = getchar()) != 1)
		{
			while(getchar() != '\n');

			printf("Please enter the integer.\n");
		}
	}

	return input;


}
