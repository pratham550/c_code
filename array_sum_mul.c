#include<stdio.h>
int main(void)
{
    int arr[10];
    int i =0;
    int result=1,sum=0;
    printf("Enter the elements of array\n");
    for(;i<10;i++)
    {
        //printf("Enter the elements of array\n");
        scanf("%d",&arr[i]);
    }
    for(;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            result = result*arr[i];
        }
        else
        sum = sum + arr[i];

    }
    printf("Even multiplication = %d and odd sum = %d\n",result,sum);

    return 0;
}