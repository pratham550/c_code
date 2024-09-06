#include<stdio.h>
char sttrcat(char str1[30],char str2[30]);
int main(void)
{
    char str1[30],str2[30];
    printf("Enter string 1 :");
    scanf("%s",str1);
    printf("Enter string 2 :");
    scanf("%s",str2);
    sttrcat(str1,str2);
    return 0;
}
char sttrcat(char str1[30],char str2[30])
{
    int i = 0,j=0;
    while(str1[i]!='\0')
    i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("Concatenated string is %s",str1);
}