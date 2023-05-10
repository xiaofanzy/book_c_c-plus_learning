#include <stdio.h>
#define MIN_PER_SEC 60

int main(void)
{
    int min, sec;

    printf("Plese enter the min for you.\n");
    scanf("%d", &min);

    while (min > 0)
    {
        sec = min * MIN_PER_SEC;
        printf("The %d min = %d sec\n", min, sec);

        printf("Please enter another values:\n");
        scanf("%d", &min);
    }

    return 0;
}