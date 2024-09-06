#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[7] = "Sumit";
   // char str2[7];
    int length = strlen(str1);
    int head=0;
    int tail = length;
    while(start<end){}
    for(int i =0 ; i <=length-1;i++)
    {
        int temp = str1[head];
        str1[head] = str1[tail];
        str1[tail] = temp;
        head++;
        tail--;
    }

    printf("%s\n",str1);
return 0;
}