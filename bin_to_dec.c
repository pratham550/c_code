#include<stdio.h>
void DecimaltoBinary(int);
int main(void)
{
    int num;
    printf("Enter the number for binary\n");
    scanf("%d",&num);
    DecimaltoBinary(num);
    return 0;
}
void DecimaltoBinary(int n)
{
    if(n>1)
    {
        DecimaltoBinary(n/2);
    }
    printf("%d",n%2);
}