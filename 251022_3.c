# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
    srand(time(NULL));

    int N;

    int threshold;
    int sensor[N];

    int black_count = 0;
    int sum_index = 0;
    int avg_index=0;

    printf("N: ");
    scanf("%d", &N);

    printf("\nvalues: ");
    for(int i=0; i<N; i++){
        scanf("%d", &sensor[i]);
    }

    printf("\nthreshold: ");
    scanf("%d", &threshold);

    for(int i=0; i<N; i++)
    {
        if(sensor[i] < threshold)
        {
            sensor[i] = 1;
        }else{
            sensor[i] = 0;
        }

        black_count += sensor[i];
        sum_index += sensor[i] * i;
    }

    printf("\nlable: ");
    for(int i=0; i<N; i++)
    {
        printf("%d ", sensor[i]);
    }
    if(black_count == 0)
    {
        printf("라인 없음\n");
    }
    
    avg_index = sum_index / black_count;
    
    printf("\nblack_count: %d", black_count);
    printf("\nindex_avg: %d\n", avg_index);

}