#include <stdio.h>

void swap(int *pa, int *pb);
void swap_no_pointer(int a, int b);

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a: %d, b:%d\n", a, b);
    // a = 20, b = 10
    swap_no_pointer(a, b);
    printf("a: %d, b:%d\n", a, b);
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swap_no_pointer(int a, int b)
{
    int temp;

    temp = a;
    a=b;
    b=temp;
}
