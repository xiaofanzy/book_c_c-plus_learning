#include <stdio.h>

double power(double x, int p);

int main(void)
{
    int exp;
    double x, xpow;

    printf("Enter a numer and the positive integer powe\n");
    printf("to q to quit\n");

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Please entet another:\n");
    }

    return 0;
}

double power(double x, int p)
{
    double pow = 1;
    for (int i = 0; i < p; i++)
    {
        pow *= x;
    }

    return pow;
}
