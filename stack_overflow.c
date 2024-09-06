#include<stdio.h>
void stack_overflow()
{
    static int i = 0 ;
    i++;
    printf("%d\n",i);
    stack_overflow();
}

int main(void)
{
    stack_overflow();
    return 0;
}
