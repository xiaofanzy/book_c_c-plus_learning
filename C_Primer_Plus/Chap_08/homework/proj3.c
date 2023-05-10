#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int input;
    int max_count = 0, min_count = 0;

    while ((input = getchar()) != EOF)
    {
        if (isupper(input))
        {
            max_count++;
        }
        else
        {
            min_count++;
        }

        if (input != '\n')
        {
            continue;
        }
    }

    printf("The total max = %d and min = %d", max_count, min_count);

    return 0;
}