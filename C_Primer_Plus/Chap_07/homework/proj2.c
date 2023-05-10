#include <stdio.h>

int main(void)
{
    char ch;
    int i = 0;

    printf("Please enter the characters.\n");

    while ((ch = getchar()) != '#' && ch != '\n')
    {
        i++;
        if (i % 8 == 0)
        {
            printf("\n");
        }

        printf("The %c ASCII is %d   ", ch, ch);
    }

    return 0;
}