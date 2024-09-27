#include<stdio.h>
int main(void)
{  
    static int n = 1;
    if(n<=10){
    printf("%d Hello world\n",n);
    n++;
    main();
    }
}