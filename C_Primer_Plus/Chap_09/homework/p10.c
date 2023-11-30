#include <stdio.h>

int fibonacci(int n);

int main(void)
{

	int n;

	printf("Please enter the number.\n");
	scanf("%d", &n);

	for(int i = 0;i < n;i++)
	{
		printf("%d\n", fibonacci(i));
	}

	return 0;
}

int fibonacci(int n)
{
	if(n <= 1)
		return n;
	else
		return fibonacci(n-2) + fibonacci(n -1);

}
