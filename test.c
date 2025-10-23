#include <stdio.h>

int main(void){
    printf("hello, world");
    
    printf("Be happy");
    printf("My friend");

    printf("\nname\tYurim\n");
    printf("country\tKorean\n");

    // \a: 소리 남
    // \r: 줄의 맨 앞으로 이동
    // \b: 백스페이스

    printf("%d\n", 10);
    printf("%lf\n", 3.4); // 소수점 이하 6자리까지 출력
    printf("%.1lf\n", 3.45); // 소수점 이하 첫째 자리까지 출력
    printf("%.10lf\n", 3.4); // 소수점 이하 10자리까지 출력
    printf("%d와 %d의 합은 %d입니다\n", 10, 20, 30);
    printf("%d\n", -100);

    printf("%c\n", 'A');
    printf("%s\n", "is A");
    printf("%c는 %s다", 'a', "is A");

    int a, b;
    int c;
    double da;
    char ch;

    a=10;
    b=a;
    c=a+20;
    da=3.5;
    ch='A';

    return 0;
} 