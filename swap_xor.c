#include<stdio.h>
#define swap(a,b) {x = x^y; y = x^y; x = x^y;}
int main(void)
{

    int x = 20,y=30;
    printf("Before swapx = %d\ty = %d\n",x,y);
    swap(x,y);
    printf("After Swap x = %d\ty = %d\n",x,y);

    return 0;
}