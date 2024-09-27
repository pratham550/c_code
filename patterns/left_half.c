#include<stdio.h>
int main(void)
{

    int rows;

    printf("Enter the rows to print\n");
    scanf("%d",&rows);

    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
}