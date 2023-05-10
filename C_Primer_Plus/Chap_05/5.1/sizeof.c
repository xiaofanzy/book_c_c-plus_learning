#include <stdio.h>

int main(void)
{
    int n = 0;
    // size_t类型
    size_t intsize;
    intsize = sizeof(int);
    /* zd 代表size_t类型，C99标准， */
    printf("n = %d and int = %zd", n, intsize);

    return 0;
}