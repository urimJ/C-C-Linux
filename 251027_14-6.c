// 포인터 배열 선언과 사용

#include <stdio.h>

int main(void)
{
    char *parr[5];
    int i;

    parr[0] = "dog";
    parr[1] = "elephant";
    parr[2] = "horse";
    parr[3] = "tiger";
    parr[4] = "lion";

    for(i=0; i<5; i++)
    {
        printf("%s\n", parr[i]);
    }

    return 0;
}