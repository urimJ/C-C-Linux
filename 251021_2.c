#include <stdio.h>

int main(void)
{
    char str[80] = "applejam";

    printf("최초 문자열");
    printf("문자열 입력: ");
    scanf("%s", str);   // 문자열 입력 받을 때 & 사용하지 않음
    printf("입력 후 문자열: %s\n", str);

    return 0;
}
