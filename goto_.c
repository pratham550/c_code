#include<stdio.h>
int main(void)
{   
    int i=1,j=1;
    start:
    
    printf("%d.Hello World\n",j++);
    if(i<10)
    {   
        i++;
        goto start;
    }
    return 0;
}