#include <stdio.h>

int main(void)
{
    char ch;
    printf("Please enter a character:\n");
    scanf("%c", &ch);
    printf("The code for %c , %d", ch, ch);

    return 0;
}