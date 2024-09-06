#include<stdio.h>
int main(void){

    int choice,n1,n2;
    printf("-------------------------------------------------------------------------\n");
    printf("Hello ! Welcome to the 4 function calculator \n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("-------------------------------------------------------------------------\n");
    printf("Please Enter your choice : \n");
    scanf("%d",&choice);
    printf("Enter the values of n1 & n2\n");
    scanf("%d%d",&n1,&n2);
    switch (choice)
    {
        while(choice <= 4|| choice >0)
    {   
        case 1:
        int sum = n1+n2;
        printf("Sum = %d\n",sum);
        break;
        case 2:
        int sub = n1-n2;
        printf("Sub = %d\n",sub);
        break;
        case 3:
        int mul = n1*n2;
        printf("mul = %d\n",mul);
        break;
        case 4:
        int div = n1/n2;
        printf("Div = %d\n",div);
        break;
        default:
        printf("Invalid Choice \n");
        break;
 }  
    
    }
    return 0;
}