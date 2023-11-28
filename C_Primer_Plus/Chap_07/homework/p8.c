#include <stdio.h>

int get_choice(void);

int main(void)
{
	int choose;
	double work_fax;

	while((choose = get_choice()) != 5)
	{
		switch(choose)
		{
			case 1:
				work_fax = 8.75;
				break;
			case 2:
				work_fax = 9.33;
				break;
			case 3:
				work_fax = 10.00;
				break;
			case 4:
				work_fax = 11.20;
				break;
			default:
				printf("Your choose is not in this.\n");
				break;
		}

		printf("Your choose work_fax is %.2f.\n", work_fax);
	}

	return 0;
}

int get_choice(void)
{

	int state;
	printf("Please enter the choose for pay rate.\n");
	printf("1)$8.75/hr		2)9.33/hr\n");
	printf("3)$10.00/hr		4)$11.20/hr\n");
	printf("5)quit.\n");

	while(scanf("%d", &state) != 1)
	{
		while(getchar() !='\n');
		printf("Your choose wrong.\n please choose again.\n");
	}

	if(state < 1 || state > 5)
	{
		printf("Your choose num is error ,please chhose again.\n");
		state = get_choice();
	}

	return state;
}

