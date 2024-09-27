#include<stdio.h>
int main(void)
{
    int i,j,rows=5,spaces;
    spaces = rows-1;
    printf("ENter the number of rows you want print pattern\n");
    scanf("%d",&rows);
    for(i =1;i<=rows;i++)
    {
        for(j = 1;j<=spaces;j++)
            printf(" ");
        for(j = 1;j<=i;j++)
            printf("* ");
        printf("\n");
        spaces--;
    }
    spaces=1;
    for(i = rows-1;i>=1;i--)
    {
        for(j = 1;j<=spaces;j++)
        printf(" ");
        for(j = 1;j<=i;j++)
        printf("* ");
        printf("\n");
        spaces++;
    }
    return 0;
}