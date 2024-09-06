#include<stdio.h>

int main(void)
{
    int size;

    printf("Enter the size of pattern you want to print :");
    scanf("%d",&size);
    int count=0;
    do
    {
        
        printf("*");
        count++;
    } while (count<size);
    
    return 0;
}