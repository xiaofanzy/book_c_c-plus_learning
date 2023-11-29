#include <stdio.h>

int less(int n,int m);

int main(void)
{
	int evial1,evial2;

	printf("Enter a pair of integers(q to quit).\n");

	while(scanf("%d%d",&evial1,&evial2) == 2)
	{
		
		printf("the %d and %d lessser is %d.\n", evial1, evial2, less(evial1,evial2));
	}

	printf("Bye.\n");

	return 0;
}

int less(int n,int m)
{
	return n > m ? m : n;
}
