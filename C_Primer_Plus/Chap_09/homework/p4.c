#include <stdio.h>

double getAverage(double num1, double num2);

int main(void)
{
    double num1, num2;

    scanf("%lf%lf", &num1, &num2);

    printf("%.2lf", getAverage(num1, num2));

    return 0;
}

double getAverage(double num1, double num2)
{
    return (1 / (1 / num1 + 1 / num2) / 2);
}