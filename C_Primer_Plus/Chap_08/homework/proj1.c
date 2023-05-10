#include <stdio.h>

int main(void)
{
    int count;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        count++;
    }

    printf("The total = %d", count);

    return 0;
}