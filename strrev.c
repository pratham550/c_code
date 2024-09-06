#include<stdio.h>
char strev(char str[50]);
int main(void)
{   
    char str[50];
    printf("Enter the string to be reversed\n");
    scanf("%[^\n]s",str);
    strev(str);
    return 0;
}
char strev(char str[50])//user defined function to reverse a string
{   
    char temp;
    int i=0,j=0;
    for(;str[i]!='\0';i++);
    i--;
    for(;j<i;j++,i--)
    {
        temp = str[j];
        str[j]=str[i];
        str[i]=temp;
    }
    printf("%s",str);
}