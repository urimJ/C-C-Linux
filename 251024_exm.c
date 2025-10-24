#include <stdio.h>

void swap(double *pa, double *pd);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
    double max, mid, min;

    printf("실수값 3개 입력: ");
    scanf("%lf %lf %lf", &max, &mid, &min);
    line_up(&max, &mid, &min);
    printf("정렬된 값 출력: %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb)
{
    double temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void line_up(double *maxp, double *midp, double *minp)
{
    if(*maxp < *midp)
    {
        // 포인터 변수 자체가 주소 값 변수
        swap(maxp, midp);
    }
    if(*maxp < *minp)
    {
        swap(maxp, minp);
    }
    if(*minp>*midp)
    {
        swap(minp, midp);
    }
}

// 입력: 2.7 1.5 3.4
// 출력: 3.4 2.7 1.5