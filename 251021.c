# include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    float avg;
    int count;

    count = sizeof(score)/sizeof(score[0]);
    // sizeof(score) == 4*5 = 20
    // sizeof(score[0]) == 4*1 = 4

    printf("sizeof(score): %ld", sizeof(score));

    for(i=0; i<count; i++)
    {
        scanf("%d", &score[i]);

    }

    for(i=0; i<count; i++)
    {
        total += score[i];
    }

    avg = total / (float)count;

    for(i=0; i<count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균: %.1lf\n", avg);
}