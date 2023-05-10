#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    int word_count = 0, char_word = 0;
    bool re_falg = false;

    while ((ch = getchar()) != EOF)
    {
        if (!iswspace(ch) && !ispunct(ch))
        {
            char_word++;
            if (!re_falg)
            {
                word_count++;
                re_falg = true;
            }
        }

        if (iswspace(ch) || ispunct(ch))
        {
            re_falg = false;
        }
    }

    printf("total characters = %d and the total word = %d and the average word is %.2f", word_count, char_word, (double)char_word / word_count);
}