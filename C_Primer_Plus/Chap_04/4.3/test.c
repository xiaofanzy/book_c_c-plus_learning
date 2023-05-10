#include <stdio.h>

int main(void)
{
    int num;
    char ch;
    // 会读取非空白字符的第一个个字符
    num = scanf(" %c", &ch);
    printf("%c", ch);
    printf("%d", num);

    return 0;
}