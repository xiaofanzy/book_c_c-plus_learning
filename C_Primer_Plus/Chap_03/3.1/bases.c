#include <stdio.h>

int main(void)
{
    int dex = 100;
    printf("dex = %d, octal = %o, hex = %x\n", dex, dex, dex);
    printf("dex = %d, octal = %#o, hex = %#x\n", dex, dex, dex);

    return 0;
}