#include<stdio.h>
#define little ((x>>24) |((x>>8)&0x0000ff00) |((x<<8)&0x00ff0000)|(x<<24))
int main(void)
{
    int x = 0x11223344;
    x = little;
    printf("%x",x);

    return 0;
}