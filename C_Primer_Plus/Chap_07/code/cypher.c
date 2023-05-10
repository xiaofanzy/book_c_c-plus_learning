#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
int main(void)
{
    char ch;

    ch = getchar();

    while (ch != '\n')
    {
        if (!isalpha(ch))
        {
            putchar(ch);
        }
        else
        {
            putchar(ch + 1);
        }
        ch = getchar();
    }

    return 0;
}