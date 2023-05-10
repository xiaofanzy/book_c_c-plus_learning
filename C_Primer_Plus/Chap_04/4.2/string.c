#include <stdio.h>
#define SBLUE "HELLO WORLD"

int main(void)
{
    printf("*%s*\n", SBLUE);
    printf("*%2s*\n", SBLUE);
    printf("%20.3s\n", SBLUE);
    printf("%-20.3s\n", SBLUE);

    return 0;
}
