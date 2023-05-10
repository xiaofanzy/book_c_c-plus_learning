#include <stdio.h>

int main(void)
{
    char firstName[40], lastName[40];

    printf("Enter your lastname:\n");
    scanf("%s", lastName);

    printf("Enter your firstName:\n");
    scanf("%s", firstName);

    printf("Firstname = %s,and lastName = %s", firstName, lastName);

    return 0;
}