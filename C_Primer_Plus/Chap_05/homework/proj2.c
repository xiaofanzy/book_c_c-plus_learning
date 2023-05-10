#include <stdio.h>

int main(void)
{
    int i = 15, num;
    printf("Enter the value for you:\n");
    scanf("%d", &num);

    while (i-- > 0)
    {
        printf("%d ", num++);
    }
    printf("\n");
    return 0;
}