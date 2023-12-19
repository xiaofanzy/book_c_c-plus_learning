#include <stdio.h>

int main() {
    int x;
    int *ptr = &x;

    printf("Size of double pointer: %lu bytes\n", sizeof(ptr));

    return 0;
}
