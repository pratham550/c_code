#define Bv(n) (1<<n)
#include<stdio.h>

int main(void)
{   
    int choice;
    printf("-----------------------------------------------------------------------------\n");
    printf("Enter your choice\n");
    printf("1.Set Bit\n");
    printf("2.Reset Bit\n");
    printf("3.Toggle Bit\n");
    scanf("%d",&choice);
    printf("-----------------------------------------------------------------------------\n");

    unsigned long int num;
    int n;
    printf("Enter the number you want to 'set' 'reset' or 'toggle'\n");
    scanf("%lu %d",&num,&n);

    switch (choice)
    {
    case 1:
        /* code */
        printf("Number before set %lu\n",num);
        num |= Bv(n);
        printf("Number after set %lu\n",num); 
        break;
    case 2:
        printf("Number before clear %lu\n",num);
        num &= ~Bv(n);
        printf("Number after clear %lu\n",num); 
        break;

    case 3:
        printf("Number before toggle %lu\n",num);
        num ^= Bv(n);
        printf("Number after toggle %lu\n",num); 
        break;
    
    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}
