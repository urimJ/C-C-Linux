#include <stdio.h>

void print_arr(int *pa, int size);

int main(void)
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {10, 20, 30, 40, 50, 60, 70};
   
    // 배열의 총 바이트 크기를 요소 하나의 바이트 크기로 나누어 요소 개수를 구함
    int size1 = sizeof(arr1) / sizeof(arr1[0]); // 5
    int size2 = sizeof(arr2) / sizeof(arr2[0]); // 7

    print_arr(arr1, size1);
    printf("\n");
    print_arr(arr2, size2);

    return 0;
}

void print_arr(int *pa, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", pa[i]);
    }
}