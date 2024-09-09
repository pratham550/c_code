#include<stdio.h>
#define swap(a,b) {int t = a;a=b; b=t;}
#define size 10
int main(void)
{
    int arr[size] = {1,33,22,3,6,7,7,88,9,10};
    bubble_sort(arr);
    for(int i =0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int bubble_sort(int arr[])
{
    for(int i =0;i<size-1;i++)
    {
        printf("i = %d\t",arr[i]);
        for(int j = 0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            printf("j = %d\t\n",arr[j]);
        }
    }
}
