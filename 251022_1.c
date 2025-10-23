#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int N = 10;
    int speed[N];
    int delta = 0;
    int count_acc = 0, count_brk = 0;

    srand(time(NULL));

    for(int i=0; i<N; i++)
    {
        int random_number = rand()%100 +1; // 1~100
        speed[i] = random_number;
    }

    for(int i=1; i<N; i++)
    {
        delta = speed[i] - speed[i-1];

        if(delta>=10)
        {
            count_acc++;
        }
        if(delta<= -10)
        {
            count_brk++;
        }
    }

    printf("주행 데이터: ");

    for(int i=0; i<N; i++){
        printf("%d ", speed[i]);
    }
    printf("\n급가속 회수: %d, 급제동 회수: %d\n", count_acc, count_brk);

    return 0;
}