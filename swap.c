#include<stdio.h>
void swap(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;

    //printf("x = %d y = %d/n",*x,*y);
}

int main(void)
{

    int a =20,b=30;
    swap(a,b);
    printf("x = %d y = %d/n",a,b);
    return 0;
}

