#include<stdio.h>
#define n 10
#define swap(a,b) {int t = a;a=b; b=t;}
int main(void)
{
    char str[n] = "jihgfedcba";
    selection_sort(str);
    return 0;
}
void selection_sort(char* str)
{
    for(int i =0;str[i]!='\0';i++)
    {
        int min = i;
        for(int j = i+1;str[j]!='\0';j++)
        {
            if(str[j]<str[min])
            {
                min =j;
            }

        }
        if(min!=i)
        {
            swap(str[i],str[min]);
        }
        
    }
    printf("%s ",str);
}