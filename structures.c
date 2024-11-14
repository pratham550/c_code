#include<stdio.h>
struct st
{
    int a;
    int b;
    int c;

};

int main(void)
{
    struct st st1 = {1,33,22};

    printf("%d\n%d\n%d\n",st1.a,st1.b,st1.c);
    struct st st2 = {.a = 122,.b = 132,.c = 133};
    printf("%d\n%d\n%d",st2.a,st2.b,st2.c);
    return 0;
}
