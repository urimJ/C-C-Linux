#include <stdio.h>

void print_str(char **pps, int cnt);

int main(void)
{
    char *ptr_arr[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;

    count = sizeof(ptr_arr) / sizeof(ptr_arr[0]);

    print_str(ptr_arr, count);

    return 0;
}

void print_str(char **pps, int cnt)
{
    int i;

    for(i=0; i<cnt; i++)
    {
        printf("%s\n", pps[i]);
    }
}