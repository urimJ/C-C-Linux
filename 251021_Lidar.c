#include<stdio.h>

int main(void)
{
    double dist[36];

    double min_first = 10000;
    double min_second = 10000;
    double min_third = 10000;

    int angle_first = 0;
    int angle_second = 0;
    int angle_third = 0;

    for(int i=0; i<36; i++)
    {
        printf("%d번 각도에서의 장애물의 거리(cm): ", i+1);
        scanf("%lf", &dist[i]);
    }

    for(int i=0; i<36; i++)
    {
        if(dist[i]<min_first)
        {
            min_first = dist[i];
            angle_first = i;
        }
    }
    for(int i=0; i<36; i++){
        if(dist[i]==min_first){
            if(i==angle_first)
            {
                continue;
            }
            else
            {
                min_second = dist[i];
                angle_second = i;
            }
        }else if(dist[i]<min_second){
            min_second = dist[i];
            angle_second = i;
        }
    }
    for(int i=0; i<36; i++){
        if(dist[i]==min_first){
            if(i==angle_first || i==angle_second)
            {
                continue;
            }
            else
            {
                min_third = dist[i];
                angle_third = i;
            }
        }else if(dist[i]<min_second){
            min_second = dist[i];
            angle_second = i;
        }
    }
    printf("\n최솟값: %lf, 각도: %d\n", min_first, angle_first);  
    printf("두 번째로 가장 작은 값: %lf, 각도: %d\n", min_second, angle_second);
    printf("세 번째로 가장 작은 값: %lf, 각도: %d\n", min_third, angle_third);
}