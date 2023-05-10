#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter the char for this.\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            continue;
        }

        switch (ch)
        {
        case 'a':
            printf("Animals!\n");
            break;
        case 'b':
            printf("balana!\n");
            break;
        default:
            printf("all dogs.\n");
            break;
        }
    }

    return 0;
}