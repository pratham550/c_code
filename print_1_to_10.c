#include<stdio.h>
int print(int n);
int main(void)

{   
    int num;
    printf("Enter num");
        scanf("%d",&num);
        print(num);
    return 0;
}
int print(int n){
    if(n==0)
    return 0;

    print(n-1);

    printf("%d.Hello\n",n);
}