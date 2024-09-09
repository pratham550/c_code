#include<stdio.h>
#define size 10
#define swap(a,b) {int t = a; a = b; b = t;}
int main(void)
{   
    int arr[size] = {1,33,44,66,77,3,6,10,34,89};
    selection_sort(arr);

    return 0;
}
int selection_sort(int arr[size])
{
   // int arr[size];
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
