#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{

	printf("The %d is %ld\n",10,rfact(10));
	printf("THe %d is %ld.\n",10,fact(10));

	return 0;
}


long fact(int n)
{
	long ans = 1;
	int index;

	for(index = 1;index <= n;index++)
		ans *=index;

	return ans;
}

long rfact(int n)
{
	long ans;	
	if(n > 0)
		ans = n*rfact(n-1);
	else
		ans = 1;
	return ans;
}
