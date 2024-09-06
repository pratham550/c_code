#include<stdio.h>
int main(void)
{
    int x = 0x44332211;
    
   //x = (x>>24) |((x>>8)&0x0000ff00) |((x<<8)&0x00ff0000)|(x<<24);
    
    //printf("%x\n",x);

    //x = (x>>24);
   
  // x = ((x<<8)&0x00ff0000);
    //x = ((x>>8)&0x0000ff00);
     x = (x<<24);
    printf("%x\n",x);
    return 0;
}