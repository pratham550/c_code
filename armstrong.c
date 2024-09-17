#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number you want to check \n");
    scanf("%d",&num);
    armstrong(num);

    return 0;
}
int armstrong(int arm)
{
    int check,rem ,sum = 0;
    check = arm;

    while(check!=0)
    {
        rem = check%10;
        sum = sum + (rem*rem*rem);
        check = check/10;
    }
    if(sum == arm)
    printf("%d is an armstrong number",arm);

    else
    printf("%d is not an armstrong number\n",arm);

}