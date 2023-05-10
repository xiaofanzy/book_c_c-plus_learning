#include <stdio.h>

int main(void)
{
    int age;
    printf("Please enter your age:\n");
    scanf("%d", &age);
    printf("The %d age is equals %le seconds. \n", age, age * 3.156e10);

    return 0;
}