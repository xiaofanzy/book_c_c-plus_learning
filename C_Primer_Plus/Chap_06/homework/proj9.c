#include <stdio.h>

int main(void)
{
    int num1, num2, res;

    printf("please enter lower and upper integer limits:");
    while (scanf("%d%d", &num1, &num2) == 2 && num1 < num2)
    {
        for (int i = num1; i <= num2; i++)
        {
            res += i * i;
        }

        printf("The sums of the squres form %d to %d is %d\n", num1 * num1, num2 * num2, res);
        printf("please enter next set of limits:");
    }
    printf("Done\n");

    return 0;
}