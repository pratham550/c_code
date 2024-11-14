#include<stdio.h>
int main(void)
{
    unsigned char n1 = 5,n2 = 3,res;

    res = n1&n2;
    printf("result = %d\n",res);

    res = n1|n2;
    printf("result = %d\n",res);

    res = n1^n2;
    printf("result = %d\n",res);

    res =~n1;
    printf("result = %d\n",res);

    res = ~n2;
    printf("result = %d\n",res);

    return 0;
}

















