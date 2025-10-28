#include <stdio.h>

// 배열 포인터!

int main(void)
{
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int (*pa)[4];
    int i, j;

    pa = arr; // 포인터와 주소

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
    return 0;
}