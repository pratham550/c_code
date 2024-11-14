#include<stdio.h>
void fun();
int main(void)
{
   static int a = 10;
    printf("%d\n",a);
    ++a;
    fun(a);
    printf("%d\n",a);
    fun(a);
    return 0;
}
void fun()
{
    int b;
    printf("%d\n",b);
    printf("%d\n",&b);
}
