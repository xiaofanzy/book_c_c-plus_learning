#include <stdio.h>
#define SEC_PER_MIN 60

int main(void)
{
    int sec, min, left;

    printf("Enter secondes <0 to quit:\n");
    scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("The %d secondes is %d minutes and %d seconds\n", sec, min,
               left);

        printf("pleae enter the next value:\n");
        scanf("%d", &sec);
    }

    return 0;
}
