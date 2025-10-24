#include <stdio.h>

int main(void)
{
    char small, cap = 'G';

    if((cap >= 'A') && (cap<='Z'))
    {
        small = cap + ('a' - 'A'); // cap + 32; 71+32; 103;
    }
    printf("대문자: %c %c", cap, '\n');
    printf("소문자: %c", small);
}