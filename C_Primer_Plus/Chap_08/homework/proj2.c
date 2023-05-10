#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            printf("\\n|%d", ch);
        }
        else if (ch == '\t')
        {
            printf("\\t|%d", ch);
        }
        else if (ch > 0 && ch < ' ')
        {
            printf("^%c|%d", ch, ch);
        }
        else
        {
            printf("%c|%d", ch, ch);
        }
        count++;

        if (count % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}