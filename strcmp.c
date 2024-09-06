#include<stdio.h>
char string_compare(char str1[30],char str2[30] );
int main(void)
{   
    char str1[30],str2[30];
    printf("Enter the strings to be compared\n");
    scanf("%s%s",str1,str2);
    string_compare(str1,str2);
   return 0; 
}
char string_compare(char str1[30],char str2[30])
{
    
    int i=0;
    for( ;str1[i]!='\0',str2[i] !='\0';i++)
   // printf("strings are not equal :- str1[]=%s str2[]=%s \n",str1,str2); 
    {
        if(str1[i]!=str2[i])
        {
            printf("Strings are not :- str1[]=%s str2[]=%s \n",str1,str2);
            return 0;
        }
        // else
        // printf("strings are not equal :- str1[]=%s str2[]=%s \n",str1,str2);    
    }
  printf("strings are  equal :- str1[]=%s str2[]=%s \n",str1,str2);   
}