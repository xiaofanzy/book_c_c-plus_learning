#include <stdio.h>

int main(void)
{
    const float MAX = 100.0f;
    const float MIN = 0.0f;

    float score, total = 0.0f;

    float max = MIN;
    float min = MAX;
    int n = 0;

    printf("Please enter the score for you.\n");

    while (scanf("%f", &score) == 1)
    {
        if (score > MAX || score < MIN)
        {
            printf("the score is not invalid, please enter again.\n");
            continue;
        }
        max = (score > max) ? score : max;
        min = (score < min) ? score : min;
        total += score;
        n++;
        printf("Enter the q to quit.\n");
    }

    printf("The total score is %.1f, and average score is %.1f", total, total / n);

    return 0;
}