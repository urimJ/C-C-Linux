#include <stdio.h>

struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address *lp);

int main(void)
{
    struct address list[5] = {
        {"홍길동", 23, "111-1111", "독도"},
        {"이순신", 35, "222-2222", "건천동"},
        {"장보고", 19, "333-3333", "청해진"},
        {"유관순", 15, "444-4444", "천안"},
        {"안중근", 45, "555-5555", "해주"}
    };

    print_list(list);

    return 0;
}

void print_list(struct address *lp)
{
    int i;

    for(i=0; i<5; i++)
    {
        printf("%10s%5d%15s%15s\n",
        (lp+i)->name, (lp+i)->age, (lp+i)->tel, (lp+i)->addr);
    }
}