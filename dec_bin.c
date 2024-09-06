#include<stdio.h>
#include<math.h>

int sum2=0,sum = 0;
void dec_bin(int,int);
int main(void)
{
    unsigned long int num;
    printf("Enter the binary no : ");
    scanf("%lu",&num);
    dec_bin(num,0);
    printf("The decimal of %lu is %d\n",num,sum2);

    return 0;
}

void dec_bin(int num,int cnt){
    if(num == 0)
        return ;
    int a = num % 10;
    sum = a * pow(2,cnt);
    sum2 += sum;
    dec_bin(num/10,++cnt);
    
}