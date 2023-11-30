#include <stdio.h>

void large_of(double * x, double * y);

int main(void)
{
	double x,y;

	printf("Please enter two doubles number.\n");

	while(scanf("%lf%lf", &x, &y) == 2)
	{
		printf("The x = %.2f and y = %.2f\n",x,y); 
		large_of(&x, &y); 
		printf("The x = %.2f and y = %.2f\n",x,y);
	}

	return 0;
}

void large_of(double * x, double * y)
{
	double tmp;
	if(*x < *y)
	{
		tmp = *y;
		*y = *x;
		*x = tmp;
	}
}

