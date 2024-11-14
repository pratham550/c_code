#include <stdio.h>

struct st1
{
    int a;
    int b;
    int c;
    struct st2
    {
        int d;
        int e;
    } stru;
} stu1, stu2;

int main(void)
{
    stu1 = (struct st1){.a = 1, .b = 2, .c = 3, .stru = {.d = 4, .e = 5}};
    
    stu2 = (struct st1){.a = 10, .b = 20, .c = 30, .stru = {.d = 40, .e = 50}};

    printf("stu1 values:\n");
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", stu1.a, stu1.b, stu1.c, stu1.stru.d, stu1.stru.e);

    printf("stu2 values:\n");
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", stu2.a, stu2.b, stu2.c, stu2.stru.d, stu2.stru.e);

    return 0;
}
