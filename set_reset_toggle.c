#include<stdio.h>
#define  set num | (1<<n) 
#define reset num & ~(1<<n)
#define toggle num ^ (1<<n) 
int main(void)
{
    int num,n;
    printf("Enter the number you want to modify\n");
    scanf("%d",&num);
    printf("Enter the number till which you want to shift the number\n");
    scanf("%d",&n);
//set
    num = (set);
    printf("set = %d\n",num);
//reset
    num = (reset);
    printf("reset = %d\n",num);
//toggle
    num = (toggle);
    printf("toggle = %d\n",num);

    return 0;
}