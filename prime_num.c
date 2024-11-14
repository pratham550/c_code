#include<stdio.h>
int main(void)
{

    int num,flag = 0;
    printf("Enter a prime number\n");
    scanf("%d",&num);
    if(num == 0 | num == 1)
    {
        flag == 1;
    }
    for(int j = 2;j<num;j++)
    {
        if(num%j==0)
            flag ==1;   
            printf("%d is not aprime number",num);
        break;      
    }
    
    if(flag == 0)                       
            printf("%d Is a prime number",num);
    
}