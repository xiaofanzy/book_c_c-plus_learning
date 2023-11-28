#include <stdio.h>

int main(void)
{
	int num;
	int odd_total = 0;
	double odd_avg = 0.0;
	int even_total = 0;
	double even_toal = 0.0;
	int odd_sum = 0,even_sum = 0;

	while((scanf("%d",&num)) == 1)
	{
		if(num == 0)
		{
			break;
		}
		else if(num % 2 != 0)
		{
			odd_total++;
			odd_sum += num;
		}
		else if(num % 2 == 0)
		{
			even_total++;
			even_sum += num;
		}
	}

	printf("Your input has %d even numebr and average is %.2f\n", even_total,(double)even_sum / even_total);
	printf(" and %d odd number and average is %.2f.\n", odd_total, (double)odd_sum / odd_total);

	return 0;
}

