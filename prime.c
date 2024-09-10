#include<stdio.h>
#define size 10
int main(void)
{
    int num;
    int flag;
    printf("Enter the value till which u want to print prime numbers \n");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        flag = 1;
        for(int j=2;j<i/2;j++)
        {
            if(i%j==0)
            flag = 0;
            break;
        }
        if(flag == 1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}