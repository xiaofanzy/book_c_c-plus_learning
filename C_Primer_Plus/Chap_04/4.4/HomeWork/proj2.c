#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];

    printf("Enter your name:\n");
    scanf("%s", name);

    printf("01-\"%s\"\n", name);
    printf("02-\"%20s\"\n", name);
    printf("02-\"%-20s\"\n", name);
    printf("03-%*s\n", strlen(name) + 3, name);

    return 0;
}