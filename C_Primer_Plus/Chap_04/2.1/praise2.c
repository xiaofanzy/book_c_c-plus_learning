#include <stdio.h>
#include <string.h>
#define PRAISE "WHAT IS YOUR NAME"

int main(void)
{
    char name[40];
    printf("Please enter the name for you?\n");
    scanf("%s", name);

    printf("Your name %s has %d letters and occ %d length\n", name, strlen(name), sizeof(name));
    printf("%s, %d, %d", PRAISE, strlen(PRAISE), sizeof PRAISE);

    return 0;
}