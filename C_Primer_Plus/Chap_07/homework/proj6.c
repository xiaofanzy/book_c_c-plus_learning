#include <stdio.h>

int main(void)
{
    char percent, previous = '\0';
    int count = 0;

    printf("Please enter character:\n");

    while ((percent = getchar()) != '#')
    {
        if (percent == 'i' && previous == 'e')
            count++;
        previous = percent;
    }

    printf("total = %d", count);

    return 0;
}