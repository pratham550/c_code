#include<stdio.h>
#define SIZE sizeof(int)*8
int main(void)
{   
    int num,i,cnt=0;
    printf("Enter a number \n");
    scanf("%d",&num);
    int value;
    while(num!=0)
    
    //for(i=0;i<SIZE;i++)
    {
        if(num&1)
        value = ++cnt;
      //  printf("%d",value);
        num = num>>1;
    }
    
    printf("count is = %d\n",value);
    return 0;
}