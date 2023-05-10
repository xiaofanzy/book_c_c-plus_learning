#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstname[40], lastname[40];

    printf("please enter you firstname:\n");
    scanf("%s", firstname);

    printf("please enter your lastname:\n");
    scanf("%s", lastname);

    printf("%20s %20s\n", firstname, lastname);
    printf("%20d %20d\n", strlen(firstname), strlen(lastname));

    return 0;
}