#include <stdio.h>

int main(void)
{
    int a = 10;


    printf("a: %d\n", a);
    int *pa = &a;

    *pa = 20;
    printf("a: %d\n", a);

    return 0;
}