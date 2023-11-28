#include <stdio.h>
#include <stdbool.h>

int get_int(void); 
bool bad_limits(int start,int stop,int min,int max);
double get_square(int start,int stop);

int main(void)
{
	const int MIN = -1000;
	const int MAX = 1000;
	int start,stop;
	double answer;

	printf("This program computes the sum of the squares of integers.\n");
	printf("now enter the limit for lower limit.\n");

	start = get_int();
	printf("enter the upper limits.\n");
	stop = get_int();

	while(start != 0 || stop != 0)
	{
		if(bad_limits(start,stop,MIN,MAX))
			printf("Error, Please enter again.\n");
		else
		{
			answer = get_square(start,stop);
			printf("The total is %.2f\n", answer);
		}
		printf("Please enter again.\n");
		start = get_int();
		stop = get_int();
	}
	printf("Bye.\n");

	return 0;
}

int get_int(void)
{
	int result;
	while(scanf("%d", &result) != 1)
	{
		printf("You input error. please enter again.\n");
		while(getchar() !='\n');
	}

	return result;

}

bool bad_limits(int start,int stop,int min,int max)
{
	bool result_flag = false;

	if(start < min)
	{
		printf("start is bigger than min.\n");
		result_flag = true;
	}
	else if(start > min && start > max)
	{
		printf("is bigger than max.\n");
		result_flag = true;
	}
	else if (stop < start)
	{
		printf("is errors. stop is smaller than start.\n");
		result_flag = true;
	}
	
	return result_flag;
}

double get_square(int start,int stop)
{
	double result;

	while(start< stop)
	{
		result += start * start;
		start++;
	}
	return result;
}
