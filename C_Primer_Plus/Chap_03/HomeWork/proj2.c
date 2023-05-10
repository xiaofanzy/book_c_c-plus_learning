#include <stdio.h>

int main(void)
{
    // int ascii;
    // char ch;
    // printf("Enter the character:\n");
    // scanf("%d", &ascii);
    // ch = ascii;
    // printf("Your enter the %c now", ch);

    int ascii;
    printf("Enter the charachter for you:\n");
    scanf("%d", &ascii);
    printf("Your enter the char is %d and the ASCII is %c", ascii, ascii);

    return 0;
}