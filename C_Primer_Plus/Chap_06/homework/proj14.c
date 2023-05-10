#include <stdio.h>
#define LEN 10

int main(void)
{
    char str[255];

    for (int i = 0; i < LEN; i++)
    {
        scanf("%c", &str[i])
    }

    for (int i = LEN - 1; i >= 0; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}