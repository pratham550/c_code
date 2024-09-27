#include<stdio.h>
int main(void)
{
    int rows;
    printf("Enter the number of rows to print pattern\n");
    scanf("%d",&rows);
    for(int i = 0;i<rows;i++)
    {

        for(int j = 0 ; j<2*i;j++)
        {
            printf(" ");
        }
        for(int k = 0 ;k<rows-i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}