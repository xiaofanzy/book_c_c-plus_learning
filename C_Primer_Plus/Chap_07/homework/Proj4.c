#include <stdio.h>

int main(void)
{
    char ch;
    int replace_size = 0;

    printf("Please enter the character:\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            replace_size++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            replace_size += 2;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("The total replace size is %d\n", replace_size);

    return 0;
}