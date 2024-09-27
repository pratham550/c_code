#include<stdio.h>
int main(void)
{
    int rows;
    int a = 0 ,b = 1,c;

    printf("Enter the number of rows:");
    scanf("%d",&rows);

    for(int i =1;i<=rows;i++)
    {
        for(int j = 1 ;j<=i;j++)
        {
            printf("%d ",a);
            c = a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }
    return 0;
}