#include <stdio.h>
#define MAX 81

int main(void)
{

    char name[MAX];
    char *ptr;
    printf("What's your name?\n");
    ptr = gets(name);
    printf("Hello, %s!\n", name);
    printf("%s, %s\n", name, ptr);
    return 0;
}