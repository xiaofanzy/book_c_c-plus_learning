#include <stdio.h>

float result(float n1, float n2);

int main(void)
{
    float num1, num2, res;

    printf("Please enter two number:\n");
    while (scanf("%f%f", &num1, &num2))
    {
        res = result(num1, num2);
        printf("the result = %.2f\n", res);
        printf("Pleae enter another two numbers\n");
    }
}

float result(float n1, float n2)
{
    return (n1 - n2) / (n1 * n2);
}