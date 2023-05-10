#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int space_num = 0;
    int other_num = 0;
    int words = 0;

    printf("Enter the character:\n");

    while ((ch = getchar()) != '#')
    {
        words++;
        if (ch == '\n')
        {
            other_num++;
        }

        if (isblank(ch))
        {
            space_num++;
        }
    }

    printf("Total has %d words, %d space %d others.\n", words, space_num, other_num);

    return 0;
}