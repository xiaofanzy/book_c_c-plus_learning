#include <stdio.h>
#define LENGTH 5
#define LINE 3

int main(void)
{

    double arr[LINE][LENGTH] = {{1.1, 2.2, 3.3}, {1.11, 2.22, 3.31}, {1.11, 2.12, 3.13}, {1.2, 2.22, 3.33}, {1.1333, 2.332, 3.333}};
    double arr_cp[LINE][LENGTH];
    copy(LENGTH, LINE, arr_cp);
    return 0;
}