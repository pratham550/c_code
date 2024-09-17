#include<stdio.h>
int main(void)
{
    int num;
    printf("ENter the number to convert\n");
    scanf("%d",&num);

    bin_dec(num);
    return 0;
}
void bin_dec(int num)
{
    if(num>1)
    {
        bin_dec(num/2);
    }
    printf("%d",num%2);
}