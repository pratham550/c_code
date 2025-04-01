#include<stdio.h>
#define little (x>>24)|((x>>8)&0x0000ff00)|(x<<24)|((x<<8)&0x00ff0000)

int main(void)
{
    int x = 0x22334455;
x = little;
printf("Big endian is = %x",x);
return 0;
}