#include <stdio.h>

void interswap(int * u, int * y);

int main(void)
{
	int x = 5;
	int y = 10;
	
	printf("Original x = %d, y = %d.\n", x, y);
	interswap(&x,&y);

	printf("Now x = %d, y = %d.\n", x, y);


	return 0;
}

void interswap(int * u, int * v)
{
	int temp;

	temp = *u;
	*u = *v;
	*v = temp;

}
