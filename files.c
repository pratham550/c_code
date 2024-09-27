#include<stdio.h>
int main(void)
{
    FILE* filePointer;
    char dataToRead[50];
    filePointer = fopen("write_files.c","r");
    if(filePointer == NULL)
    {
        printf("write_files.c file loaded to open");
        
    }

    return 0;
}