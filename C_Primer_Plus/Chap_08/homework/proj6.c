#include <stdio.h>
#include <ctype.h>

char get_frist();

int main(void)
{
    char input;

    input = get_frist();
    printf("%c", input);
    return 0;
}

char get_frist()
{
    int ch;

    while (isspace(ch = getchar()))
        ;
    return ch;
}