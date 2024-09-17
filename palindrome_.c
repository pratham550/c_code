#include<stdio.h>
int palindrome(int );
int main(void)
{   int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    palindrome(x);
    return 0;

}
int palindrome(int x)
{
    int rem = 1,rev = 0;
    int temp = x;
    while(x!= 0)
    {
        rem = x%10;
        rev = rev * 10 + rem;
        x  = x/10;
    }
    if(temp == rev)
    printf("TRUE");
    else
    printf("FALSE\n");
}

