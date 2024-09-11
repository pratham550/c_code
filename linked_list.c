#include<stdio.h>
#include<stdlib.h>
void append(struct node **,int);
void add_start(struct node **,int);
void add_end(struct node *,int,int);
void display(struct node *);
void del(struct node **,int);
int count(struct node *);
struct node 
{
    int data;
    struct node *link;
};
int main(void)
{
    struct node *p;
    p = NULL;//shows empty linked list
    printf("No of elements in linked list are %d\n",count(p));
    append(&p,14);
    append(&p,32);
    append(&p,99);
    append(&p,900);
    append(&p,89);
    printf("No of elements in linked list are %d\n",count(p));
    display(p);
    add_start(&p,0);
    add_end(p,3,60);
    add_end(p,6,60);
    display(p);
    printf("No of elements in linked list are %d\n",count(p));
    del(&p,0);
    del(&p,60);
    del(&p,14);
    display(p);
    printf("No of elements in linked list are %d\n",count(p));
    return 0;
}
void append(struct node **q,int num)
{
    struct node *temp,*r;
    if(*q == NULL)//NULL is used because it shows that node we are pointing at is last node or list is empty
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = num;
        temp -> link = NULL;
        *q = temp;
    
    }
    else 
    {
        temp = *q;
        //here we are going to the last node because we didnt find an empty node
        while(temp->link != NULL)
        temp = temp->link;
        //adding node at the end
        r = (struct node*)malloc(sizeof(struct node));
        r -> data=num;
        r -> link=NULL;
        temp -> link = r;
    }
}
//this function adds a new node at the begining
void add_start(struct node **q,int num)
{
    struct node *temp;
    //add a new node
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = num;
    temp -> link = *q;
    *q = temp;
}
//this function adds a new node at the end
void add_end(struct node *q,int loc,int num)
{
    struct node *temp,*r;
    int i;
    temp = q;
    //skip to desired position
    for(i =0;i<loc;i++)
    {
        temp = temp->link;
        //if end of linked list is encountered
        if(temp == NULL)
        {
            printf("There are less than %d elements in list \n",loc);
            return ;
        }
    }
    //inserting new node
    r = (struct node*)malloc(sizeof(struct node));
    r -> data = num;
    r -> link = temp->link;
    temp -> link = r;
}
//displaying the contents of linked list
void display(struct node *q)
{
    //traversing through the linked list
    while(q != NULL)
    {
        printf("%d ",q->data);
        q = q-> link;
    }
    printf("\n");
}
//it counts the number of nodes present in the linked list
int count(struct node *q)
{
    int c = 0;
    while(q!=NULL)
    {
        q = q->link;
        c++;
    }
    return c;
}
//deletes the specific node from the linked list
void del(struct node **q,int num)
{
    struct node *old,*temp;
    temp = *q;
    while(temp != NULL)
    {
        if(temp->data == num)
        {
            //if node to be deleted is the first node in the linked list
            if(temp == *q)
                *q = temp->link;
                //deletes the intermediate node in the linked list
                
                else
                    old->link = temp->link;
                free(temp);//free the memory occupied by the node
                return;
        }
        //traverse the linked list till the last node is reached
        else
            {
                old = temp;//old points to the previous node
                temp = temp->link;//go to next node
            }
    }
    printf("Element %d not found\n",num);
}