#include <stdio.h>
#define SIZE 5
int main(void)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = SIZE; j > i; j--)
        {
            printf(" ");
        }

        // 左边递增
        for (int j = 0; j <= 2 * i; j++)
        {

            if (j >= i)
            {
                printf("%c", 'A' + 2 * i - j);
            }
            else
            {
                printf("%c", 'A' + j);
            }
        }

        for (int j = SIZE; j > i; j--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}