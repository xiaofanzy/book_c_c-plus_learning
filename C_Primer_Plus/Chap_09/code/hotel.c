#include <stdio.h>
#include "hotel.h"

int menu(void)
{
	int states;
	int index;
	
	printf("Choose the hotel you live.\n");
	printf("1)small		2)medium\n");
	printf("3)big		4)bigger.\n");
	printf("5}quit.\n");

	while((scanf("%d",&states)) != 1 || states > 5 || states < 0)
	{
		printf("Your choose an error type ,please choose again.\n");
		scanf("%*s");

	}

	return states;	
}

int getnight(void)
{
	int nights;
	printf("Please enter the days you live.\n");

	while((scanf("%d",&nights)) != 1 || nights < 0)
	{
		printf("Please choose again.\n");
		scanf("%*s");
	}
	
	return nights;
}

void showprice(double rate, int night)
{
	int index;
	double total = 0.0;
	double factor = 1.0;

	for(index = 1;index <= night;index++,factor *= DISCOUNT)
	{
		total += factor * rate;
	}

	printf("The total is %.2f.\n", total);
}

