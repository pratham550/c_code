#include<stdio.h>
char strrev(char str[50]);
int main(void)
{

    char str[50];
    printf("Enter a string to reverse\n");
    scanf("%[^\n]s",str);
    strrev(str);

    return 0;
}
char strrev(char str[50])
{
    char temp;
    int i=0,j=0;
    for(;str[i]!='\0';i++);
    i--;
    for(;j<i;j++,i--)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
    printf("%s",str);
}