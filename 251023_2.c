#include <stdio.h>
#include <stdlib.h>

#define N_SAMPLES 10
#define WARN_V    10.8
#define CRIT_V    10.2

int emergency_stop(double a);
int low_voltage_warning(double a);

int main(void)
{
    double datas[N_SAMPLES];
    int warning_cnt = 0;
    double min = 10000.0;

    printf("전압 10개를 입력하세요(V): ");

    for(int i=0; i<N_SAMPLES; i++)
    {
        scanf("%lf", &datas[i]);
        if(datas[i]<min)
        {
            min = datas[i];
        }
        int e_stop = emergency_stop(datas[i]);
        if(e_stop==1)
        {
            break;
        }
        int l_warning = low_voltage_warning(datas[i]);
        if(l_warning==1)
        {
            warning_cnt++;
        }
    }
    if(warning_cnt>=3)
    {
        printf("상태: LOW VOLTAGE WARNING");
    }
    printf("\n최저 전압: %.2lf", min); 
}

int emergency_stop(double a)
{
    if(a<10.2)
    {
        printf("상태: Emergency Stop");
        return 1;
    }
    return 0;
}

int low_voltage_warning(double a)
{
    if(a<10.8)
    {
        return 1;
    }
    return 0;
}
