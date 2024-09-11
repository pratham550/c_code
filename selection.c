#include<stdio.h>
#define size 10
#define swap(a,b) {int t = a; a = b; b = t;}
int main(void)
{
    int arr[size] = {10,3,22,5,6,12,55,9,4,11};
    selection_sort(arr);
    return 0;
}

int selection_sort(int arr[size])
{
    for(int i =0;i<size;i++)
    {
        int min = i;
        for(int j = i+1;j<size;j++) 
        {
            if(arr[j]<arr[min])
            {
                min =j;
            }
            
        }
        if(min!=i)
            {
                swap(arr[i],arr[min]);
            }
    printf("%d ",arr[i]);

    }
}