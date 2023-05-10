#include <stdio.h>
#include <ctype.h>

int fun(char ch);

int main(void)
{

    int ch, a;

    while ((ch = getchar()) != EOF)
    {
        a = fun(ch);

        if (a == -1)
        {
            printf("worng!\n");
        }
        else
        {
            printf("%c is the number %d.\n", ch, a);
        }

        while ((ch = getchar()) != '\n')
        {
            continue;
        }
    }

    return 0;
}

int fun(char ch)
{
    while (isalpha(ch))
    {
        return toupper(ch) - 64;
    }

    return -1;
}
