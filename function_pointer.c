#include<stdio.h>

int sum(int a, int b)
{
    //int a,b;
    printf("sum = %d",a+b);

}
int sub(int a, int b)
{
    //int a,b;
    printf("sub = %d",a-b);

}

int main(void)
{
    int (*ptr)(int,int);
   ptr = sum;
   ptr = sub;
   sub(40,30);
   ptr(40,40);
    sum(30,40);
    ptr(30,40);
    return 0;
}