#include <stdio.h>

int sum(int, int);

int main(void)
{
    int (*fp)(int, int);
    int result;

    fp = sum;
    result = fp(10, 20); //(*fp)(10, 20)
    printf("result: %d\n", result);

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}