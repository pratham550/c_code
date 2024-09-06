#include<stdio.h>
int main(void)
{
    int num,n1=0,n2=1,n3;
    printf("Enter the number till which u want to print fibonacci\n");
    scanf("%d",&num);
    printf("%d %d",n1,n2);
    while(num>=0)
    {
        n3 = n1+n2;
        printf(" %d",n3);
        n1 = n2;
        n2 = n3;
        num--;
    }
    return 0;
}