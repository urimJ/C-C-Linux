#include <stdio.h>

void print_arr(int *pa);

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};

    print_arr(arr);

    return 0;
}

void print_arr(int *pa)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ", pa[i]);
    }
}