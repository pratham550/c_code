#include<stdio.h>
int main()
{
        int count =1;
        if(count<=10){
        printf("%dHello World\n\r",count);
        main();
        count++;}
        return 0;
}
