#include <stdio.h>

int main(void)
{
    float height;
    char name[40];

    printf("Please enter the height and the name for you:\n");
    scanf("%f", &height);
    scanf("%s", name);
    printf("%s, you are %0.3f feet tail.\n", name, height / 100);

    return 0;
}