#include <stdio.h>

int main(void)
{
	/**
	 * 在第6章 C控制语句：循环的程序清单中，函数power()的功能是返回一个double类型的某个
	 * 数的正整数次幂。请修改该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂都为0，
	 * 任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处理为1）。
	 */
	double power(double n, int p);
	double n;
	int p;

	printf("Enter a number and a positive integer power: ");
	while (scanf("%lf %d", &n, &p) == 2)
	{
		printf("%.3g to the power %d is %.5g\n", n, p, power(n, p));
		printf("Enter next pair of numbers or q to quit: ");
	}



	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;

	if (n == 0)
	{
		if (p == 0)
		{
			printf("0 to the power 0 is undefined; using 1 as the value.\n");
			pow = 1;
		}
		else
		{
			pow = 0;
		}
	}
	else
	{
		if (p > 0)
		{
			for (i = 1; i <= p; i++)
			{
				pow *= n;
			}
		}
		else if (p < 0)
		{
			for (i = 1; i <= -p; i++)
			{
				pow *= n;
			}
			pow = 1 / pow;
		}
		else
		{
			pow = 1;
		}
	}

	return pow;
}
