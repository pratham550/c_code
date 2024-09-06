#include<stdio.h>
#include<string.h>

int main(void)
{   char temp;
    char str[50];
    //int len = strlen(str);
    int i=0;
    int j=0;
    
    printf("Enter your string\n");
    scanf("%[^\n]s",str);

for(;str[i]!='\0';i++);
    i--;
    for(;j<i;j++,i--)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;

    }
    printf("%s",str);
    return 0;
}

