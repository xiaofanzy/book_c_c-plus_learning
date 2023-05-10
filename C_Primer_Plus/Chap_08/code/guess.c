#include <stdio.h>

int main(void)
{
    int guess = 0;
    char response;

    printf("guess num y is yes n is no. is %d?\n", guess);

    while ((response = getchar()) != 'y')
    {
        if (response == 'n')
        {
            printf("is %d?\n", ++guess);
        }
        else
        {
            printf("sorry i understand only y or n\n");
        }

        while (getchar() != '\n')
        {
            continue;
        }
    }

    printf("i kenw i cound do it .\n");

    return 0;
}