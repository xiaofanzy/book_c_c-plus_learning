#include <stdio.h>

int lesser(int num1, int num2);

int main(void)
{
    int num1, num2;

    printf("Enter two numbers;\n");
    scanf("%d %d", &num1, &num2);
    printf("The lesser is %d", lesser(num1, num2));

    return 0;
}

int lesser(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }

    return num2;
}