#include <stdio.h>

#define BASE1 10.00
#define OVERTIME_BASIC 1.5
#define OVERTIME_HOUR 40
#define RATE_1 0.15
#define RATE_2 0.20
#define RATE_3 0.25

#define BASIC_1 (300 * RATE_1)
#define BASIC_2 (BASIC_1 + 150 * RATE_2)

double get_tax(double earn); 
double get_time(void);

int main(void) {
	int worktime_hour;

	double worktime_eran = 0.0;

	printf("pelase enter the hour your works this week.\n");

	while((worktime_hour = get_time()) !='0')
	{
		if(worktime_hour <= OVERTIME_HOUR)
		{
			worktime_eran = worktime_hour * BASE1;
		}
		else
		{
			worktime_eran = BASIC_1 + (worktime_hour - OVERTIME_HOUR) * OVERTIME_BASIC;
		}

		worktime_eran = get_tax(worktime_eran);
		printf("it has eran  %.2f money.\n", worktime_eran);
	}

	return 0;
}

double get_time(void)
{
	double times;

	while(scanf("%lf", &times) != 1)
	{
		printf("yuo enter the wrong numebr.\n");
		while(getchar() !='\n');
	}

	return times;
}

double get_tax(double earn)
{
	if(earn <= 300)
		earn -= earn * RATE_1;
	else if(earn < 450)
		earn -= (BASIC_1 + (earn - 300) * RATE_2);
	else
		earn -= (BASIC_2 + (earn - 450) * RATE_3);

	return earn;
}
