//in this code we have printed all the bits we have set or == 1 in a 32 bits or 4 bytes of an integer

#include<stdio.h>
int main(void)
{
    int count=0;
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);

    for(int i =0;i<32;i++){
        int mask = 1<<(i-1);
        int x = (num & mask);
        if(x==0)
        {
            count++;
        }

    }
        printf("%d",count);
    return 0;
}
