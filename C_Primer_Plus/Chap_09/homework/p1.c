#include <stdio.h>

int min(int x, int y);

int main(void)
{
	int x = 5;
	int y = 10;
	int min_num;

	min_num = min(x, y);

	printf("The %d and %d min is %d.\n", x, y, min_num);

	return 0;
}

int min(int x, int y)
{
	return x > y ? y : x;
}
