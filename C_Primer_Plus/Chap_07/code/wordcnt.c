#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '|'

int main(void)
{
    char ch;
    unsigned long n_chars = 0;
    unsigned long n_lines = 0;
    unsigned long n_words = 0;
    int p_line = 0;

    bool inword = false;

    while (ch = getchar() != STOP)
    {
        n_chars++;

        if (ch != '\n')
        {
            n_lines++;
        }

        if (!isspace(ch) && !inword)
        {
            n_words++;
        }

        if (isspace(ch) && inword)
        {
            inword = false;
        }
    }

    if (ch != '\n')
    {
        p_line = 1;
    }

    printf("character %ul ,words = %ul, line = %ul, partial lines = %d\n", n_chars, n_lines, n_words, p_line);

    return 0;
}