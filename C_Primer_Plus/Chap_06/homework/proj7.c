#include <stdio.h>
#include <string.h>

#define SIZE 50

int main(void)
{
    char str[SIZE];

    printf("Please enter the character:\n");
    scanf("%s", &str);

    for (int i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}