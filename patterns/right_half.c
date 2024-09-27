#include<stdio.h>
int main(void)
{
    
    int rows;
    printf("Enter the number of rows you need to print\n");
    scanf("%d",&rows);

    for(int i = 0;i<rows;i++)
    {
    for (int j = 0; j < 2 * (rows - i) - 1; j++)     
        {
                printf(" ");
        }
        for(int k = 0;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}