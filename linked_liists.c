#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void append(struct node **,int );

int main(void)
{
    struct node *p;
    p = NULL;
    append(&p,14);
    append(&p,89);
    append(&p,888);
    append(&p,15);
    printf("No of elements in linked list are %d\n",count(p));
    add_start(&p,61);
    add_end(p,3,71);
    display(p);

    return 0;
}

void append(struct node **q,int num)
{
    struct node *temp,*r;
    if(*q == NULL)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp -> data = num;
        temp -> link = NULL;
        *q = temp;
    }
    else 
    {
        temp = *q;
        while(temp->link!=NULL)
        temp = temp->link;

        r = (struct node*)(malloc(sizeof(struct node)));

        r-> data = num;
        r -> link = NULL;
        temp -> link = r;
    }

}

void display(struct node *q)
{
    while(q!= NULL)
    {
        printf("%d ",q->data);
        q = q -> link;
    }
    printf("\n");
}
int count(struct node *q)
{
    int c=0;
    while(q!=NULL)
    {
        q = q->link;
        c++;
    }
        return c;
}
void add_start(struct node **q,int num)
{
    struct node *temp;
    temp =(struct node *)(malloc(sizeof(struct node)));
    temp->data = num;
    temp->link = *q;
    *q = temp;

}
void add_end(struct node *q,int loc,int num)
{
    struct node *temp,*r;
    int i;
    temp = q;
    for(i = 0;i<loc;i++)
    {
        temp = temp->link;

        if(temp == NULL)
        {
            printf("There are less %d elements than entered",loc);
            return;
        }

    }
    r = (struct node *)(malloc(sizeof(struct node)));
    r -> data = num;
    r -> link = temp->link;
    temp -> link = r;
}