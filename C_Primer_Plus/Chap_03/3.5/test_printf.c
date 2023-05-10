#include <stdio.h>

int main(void)
{
    // printf 满足四种情况才会将缓冲区的数据推送到屏幕中
    /*
        1.缓冲区满的时候
        2.缓冲区遇到了换行符的时候；
        3.程序云心结束的时候；
        4.需要输入的时候
     */
    char ch;

    printf("hello World\n");
    scanf("%c", &ch);

    while (1)
        ;

    return 0;
}