 #include <stdio.h>

 int main(void)
 {
    int arr[3];

    int i;

    *(arr+0) = 10;
    *(arr+1) = *(arr+0) +10;

    printf("배열의 세 번째 값: ");
    scanf("%d", arr+2);

    for(i=0; i<3; i++)
    {
        printf("%5d", *(arr+i));
    }

    // 포인터와 변수
    int * pa;
    pa = arr;
    printf("\n%d", sizeof(*pa));

    return 0;
}