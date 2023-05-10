#include <stdio.h>

void min(double x, double y);

int main(void)
{
    double num1, num2;

    scanf("%lf %lf", &num1, &num2);

    min(num1, num2);

    return 0;
}

void min(double x, double y)
{
    printf("%.2lf \n", x > y ? y : x);
}