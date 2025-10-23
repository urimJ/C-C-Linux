#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
    srand(time(NULL));

    const int N = 10;
    int battery[N];
    int alert = 0; // 0:OFF, 1:ON
    char message_off[4] = "OFF";
    char message_on[3] = "ON";

    for(int i=0; i<N; i++)
    {
        int rand_num = rand()%45+1;
        battery[i] = rand_num;
    }

    for(int i=0; i<N; i++)
    {
        if(alert ==0 && battery[i]<=30)
        {
            alert = 1;

        }
        else if(alert==1&& battery[i]>=35)
        {
            alert = 0;
        }
        
        if(alert==0) 
        {
            printf("배터리 잔량: %d, 경고: %s\n", battery[i], message_off);
        }
        else
        {
            printf("배터리 잔량: %d, 경고: %s\n", battery[i], message_on);
        }
    }

    return 0;
}
