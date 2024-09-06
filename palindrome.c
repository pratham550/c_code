#include<stdio.h>

int main(void)
{

    int num,rev=0,sum=0,rem=1 ;
    printf("Enter the number \n");
    scanf("%d",&num);
    int temp = num;
    while(num!=0)
    {
            rem = num%10;
            rev = rev*10 + rem;
            num = num/10;
    }
    if(temp == rev)
    printf("It is palindrome\n");
    else 
    printf("Not a Palindrome \n");
      return 0;
}