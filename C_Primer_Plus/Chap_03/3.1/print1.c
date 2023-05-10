#include <stdio.h>

int main(void)
{
    int ten = 10, two = 2;

    printf("Dong right things:\n");
    printf("%d minus %d is %d\n", ten, two, ten - two);

    printf("Doing wrong things:\n");
    /* 必须明确说明符的数目同待打印的数目相同 */
    printf("%d minus %d is %d", ten);

    return 0;
}