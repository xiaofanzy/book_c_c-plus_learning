#include <stdio.h>

#define RATE_1 17850
#define RATE_2 23900
#define RATE_3 29750
#define RATE_4 14875

#define RATIO_1 0.15
#define RATIO_2 0.28

#define COST_1 (RATE_1 * RATIO_1)
#define COST_2 (RATE_2 * RATIO_1)
#define COST_3 (RATE_3 * RATIO_1)
#define COST_4 (RATE_4 * RATIO_1)

double get_earn(double m, int s); 
int get_choice(void); 
void get_skip(void);
double get_money(void);

int main(void)
{

	int rate_state;
	double money;
	double rate = 0;

	printf("Please enter the type your choose.\n");
	printf("Enter 0 to quit.\n");
	while((rate_state =get_choice()) != 0)
	{
		printf("Please enter the money you earn.\n");
		money = get_money();
		rate = get_earn(money,rate_state);

		printf("Last your must give country %.2f money.\n",rate);
		printf("Please enter again.\n");
	}


	return 0;
}

int get_choice(void)
{
	int state;

	while((scanf("%d", &state)) != 1)
	{
		get_skip();
	}
	
	return state;
}

void get_skip(void)
{
	while(getchar() !='\n');
}

double get_money(void)
{
	double earn;

	while((scanf("%lf",&earn)) != 1)
		get_skip;

	return earn;
}


double get_earn(double m, int s)
{
	double rate = 0.0;

	switch(s)
	{
		case 1:
			rate = m > RATE_1 ? COST_1 + (m - RATE_1) * RATIO_2 : m * RATIO_1;
			break;
		case 2:
			rate = m > RATE_2 ? COST_2 + (m - RATE_2) * RATIO_2 : m * RATIO_1;
			break;
		case 3:
			rate = m > RATE_3 ? COST_3 + (m - RATE_3) * RATIO_2 : m * RATIO_1;
			break;
		case 4:
			rate = m > RATE_4 ? COST_4 + (m - RATE_4) * RATIO_2 : m * RATIO_1;
			break;
		default:
			printf("Pleae enter another choose.\n");
			break;	
	}

	return m - rate;
}
