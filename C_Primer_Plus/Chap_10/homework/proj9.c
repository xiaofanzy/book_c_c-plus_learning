#include <stdio.h>
#define SIZE 4

void add_arr(int n, const int pt[], const int ptr[], int ptadd[]);
void show(int arr_add[], int size);

int main(void)
{
    int arr[SIZE] = {2, 4, 65, 8};
    int arr1[SIZE] = {1, 0, 4, 6};

    int arr_add[SIZE];

    add_arr(SIZE, arr, arr1, arr_add);

    show(arr_add, SIZE);

    return 0;
}

void add_arr(int n, const int pt[], const int ptr[], int ptadd[])
{
    for (int i = 0; i < n; i++)
    {
        ptadd[i] = pt[i] + ptr[i];
    }
}

void show(int arr_add[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr_add + i));
    }
    printf("\n");
}