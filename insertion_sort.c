#include<stdio.h>
#define size 10
#define swap(a,b) {int t = a; a=b; b=t;}
int main(void)
{
    int arr[size] = {1,3,2,66,4,33,22,14,12,10};
    for(int i = 0;i<size;i++)
    {
       // printf("Array Before sort\n");
        printf("%d ",arr[i]);
       
    }
     printf("\n");
    insertion_sort(arr);
    for(int i = 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int insertion_sort(int arr[size])
{
    int temp,j;
    for(int i = 1;i<size;i++)
    {   temp = arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            swap(arr[j+1],arr[j]);
            j--;
        }
        arr[j+1] = temp;
    }

}