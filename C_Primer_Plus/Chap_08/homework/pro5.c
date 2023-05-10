#include <stdio.h>

int main(void)
{
    const int MAX = 100;
    int MIN = -100;
    int num;
    printf("guess:50?\n");

    while ((num = getchar()) != 'y')
    {
        if (num == 'n')
        {
            MIN = (MAX + MIN) / 2;
            printf("is %d to %d", MIN, MAX);
        }
        else
        {
            printf("soory i undestand only n or y.\n");
        }

        while (getchar() != '\n')
        {
            continue;
        }
    }

    return 0;
}