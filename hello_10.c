#include<stdio.h>

int main(void)
{
    static int i=0,n=1;
    if(i==10)
    return 0;
    printf("%d.Hello world \n",n);
    i++,n++;
    main();
    return 0;
}