#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0;

    printf("Please enter an integer to be summed:");
    printf("q to quit;\n");

    while (scanf("%ld", &num))
    {
        sum += num;
        printf("Please enter the next integer:\n");
    }
    printf("The total num is %ld", sum);

    return 0;
}