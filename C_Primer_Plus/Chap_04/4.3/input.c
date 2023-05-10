#include <stdio.h>

int main(void)
{
    int ages;
    float assert;
    char pet[40];

    printf("enter your age,assets, and favorite pet.");
    scanf("%d", &ages);
    scanf("%f", &assert);
    scanf("%s", pet);

    printf("%d %.2f %s", ages, assert, pet);

    return 0;
}