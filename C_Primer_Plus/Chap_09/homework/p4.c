#include <stdio.h>

void getreciprocal(double f1, double f2);


int main(void)
{
	double f1,f2;

	printf("Please enter two double numbers.\n");

	while((scanf("%lf%lf", &f1, &f2)) == 2)
	{
		getreciprocal(f1,f2);
	}
	printf("Bye!.\n");

	return 0;
}

void getreciprocal(double f1, double f2)
{
	double avg;

	avg = 1 / f1 + 1 / f2;

	printf("The reciprocal is %.2f", 1/avg);

}
