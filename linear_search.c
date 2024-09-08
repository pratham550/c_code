#include<stdio.h>
#define SIZE 10
int main(void)
{
    int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};
    int data,found = 0;
    printf("Enter the element to be found\n");
    scanf("%d",&data);
   // found = 0;
    for(int i = 0;i<SIZE;i++)
    {
        
        if(arr[i]==data)
        {
            printf("Element found at index %d",i);
            found = 1;
            break;
        }
    }
        if(found == 0)
        {
            found = 1;
            printf("Element entered not found in array\n");
        }
    
    return 0;
}