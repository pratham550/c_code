#include<stdio.h>
#define SIZE 10
int main(void)
{
    int left = 0,right = SIZE-1;
    int arr[SIZE]={10,20,30,40,50,60,70,80,90,100};
    int data;
    printf("Enter the data you want to search\n");
    scanf("%d",&data);
    while(left<=right){
     int mid = (left+right)/2;

    if(arr[mid]==data)
    {
        printf("Data found at index %d\n",mid);
        break;
    }
    
    if(arr[mid]>data)
    {
        right = mid-1;
    }
    else 
    left = mid +1;
    }
    return 0;
}
// int binary_search(int data,int key)
// {

// }