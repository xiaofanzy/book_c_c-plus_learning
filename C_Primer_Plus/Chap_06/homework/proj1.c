#include <stdio.h>
#define SIZE 26

int main(void)
{
    char artis[26];
    for (int i = 0; i < SIZE; i++)
    {
        artis[i] = 'a' + i;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%c", artis[i]);
    }

    return 0;
}