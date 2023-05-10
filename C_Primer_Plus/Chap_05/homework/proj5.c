#include <stdio.h>

int main(void)
{
    int n;
    int count = 0, sum = 0;
    printf("Enter the limit num:");
    scanf("%d", &n);

    while (count++ < n)
    {
        // sum += count;
        // proj6
        sum += count * count;
    }

    printf("total = %d", sum);

    return 0;
}