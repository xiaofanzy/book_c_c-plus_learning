#include <stdio.h>

#define SIZE 10
#define PAR 72

int main(void)
{
    int score[SIZE];
    float average;
    int sum;

    printf("Enter the score for 10 size;\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &score[i]);
    }
    printf("\n");
    for (int j = 0; j < SIZE; j++)
    {
        sum += score[j];
        printf("Your %d score is  %d\n", j, score[j]);
    }
    printf("\n");
    average = (float)sum / SIZE;
    printf("your average score is %.2f\n", average);
    printf("your par is %.2f\n", average - PAR);

    return 0;
}