#include <stdio.h>

#define CON 1.0

int main(void)
{
    float num, sum_add, sum_sub;
    int size, sign = 1;

    printf("Please enter the circle size:\n");

    while (scanf("%d", &size))
    {
        for (int i = 1; i <= size; i++, sign = 0 - sign)
        {
            sum_add += CON / i;
            sum_sub += sign * CON / i;
        }
        printf("the total sum_add = %.2f\n", sum_add);
        printf("the total sum_sub = %.2f\n", sum_sub);

        printf("Please enter another size:\n");
    }

    return 0;
}