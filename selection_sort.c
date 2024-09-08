#include<stdio.h>
#define SIZE 10
#define Swap(a,b) { int t = a; a = b; b = t;}
int main(void)
{
    int arr[SIZE] = {1,33,22,5,11,89,67,32,54,70},i=0,j=0;
    for(i=0;i<SIZE;i++){
    int min = i;
    for(j=i+1;j<SIZE;j++)
    {
        if(arr[j]<arr[min])
        {
            min = j;
        }
    }
    if(min!=i)
    {
        Swap(arr[i],arr[min]);
    }
    printf("\t%d",arr[i]);

    }
    return 0;
}
