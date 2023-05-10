#include <stdio.h>

int main(void)
{
    int secret_code = 13;
    int enter_code;
    do
    {
        printf("enter the secret code;\n");
        scanf("%d", &enter_code);
    } while (enter_code != secret_code); // 当执行为真的时候，走循环，当执行为假的时候，跳出循环；

    return 0;
}