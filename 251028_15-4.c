#include <stdio.h>

int main(void)
{
    int arr[5];

    // %u: 부호 없는(unsigned) 10진수 정수 
    // %p: 포인터 메모리 주소를 16진수로 출력
    printf("  arr의 값: %u\t", arr);
    printf("arr의 주소: %u\n", &arr);
    printf("  arr + 1: %u\t", arr+1);
    printf(" &arr + 1: %u\n", &arr+1);

    /*
    arr의 값: 1745841424   arr의 주소: 1745841424
    arr + 1: 1745841428    &arr + 1: 1745841444
    */
}