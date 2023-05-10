#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int i = INT_MAX;
    printf("%d, %d, %d\n", i, i + 1, i + 2);

    // 浮点数上溢会导致INF， 浮点数下溢会导致精度丢失
    float b = 3.402823e+38 * 100.0f;
    float c = 1.175494e-38 / 100.0f;
    printf("%e\n", b); // inf 上溢造成了inf
    printf("%e\n", c); // 1.175493e-40 造成了精度丢失

    return 0;
}