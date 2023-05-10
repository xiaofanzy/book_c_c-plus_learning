#include <stdio.h>

float square(float n);

int main(void)
{
    float num;
    float sum = 0.0;

    printf("Please enter the num:");
    scanf("%f", &num);

    sum = square(num);
    printf("the %.2f square is = %.2f", num, sum);

    return 0;
}

float square(float n)
{
    return n * n * n;
}