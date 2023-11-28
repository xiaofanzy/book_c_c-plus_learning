#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int input;
	int f = 1;
	bool isPrime = true;
	printf("Please enter the num.\n");
	
	while(scanf("%d",&input) == 1)
	{
		for(f = 2; f < input; f++)
		{
			if (input % f == 0)
			{			
				isPrime = false;
				break;
			}
		}
		printf("The %d %s prime.\n",input, isPrime ? "is":"is't");
	}

	//printf("The %d %s prime.\n",input, isPrime ? "is":"is't");

	return 0;
}

