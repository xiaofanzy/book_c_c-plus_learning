#include <stdio.h>

int main(void)
{
    printf("*%x*, *%#x*, *%X*\n", 31, 31, 31);
    printf("*%d*, *% d*, *% d*", 42, 42, -42);
    printf("*%5d*, *%5.3d*, *%05d*, *%05.3d*", 6, 6, 6, 6);

    return 0;
}