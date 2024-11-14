#include<stdio.h>
int main(void)
{
    register int a[500];
    // for(int i =0;i<500;i++)
    // {
    //     &a[i]=i;
    //     // printf("%d",a[i=i]);
    //     // printf("%d",&a[i]);
    // }
    printf("%d\n",a[599]);
    return 0;
}