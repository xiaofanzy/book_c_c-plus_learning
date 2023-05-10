#include <stdio.h>

int main(void)
{
    float toobig = 3.14e38 * 100.0f;
    printf("toobig = %f", toobig);
    return 0;
}