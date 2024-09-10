#include<stdio.h>
int main(void)
{
    int *ptr;
    printf("%d",*ptr);
    free(ptr);
    printf("%d",ptr);
    return 0;
}