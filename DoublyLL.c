#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *create(struct node *start,struct node *current,struct node *new_node)
{
    int c;
    do
    {
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("Enter data-");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        new_node->prev=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else{
            current->next=new_node;
            new_node->prev=current;
            current=new_node;
        }
        printf("Do you want to continue(1/0)?-");
        scanf("%d",&c);
    } while (c==1);
    
    return start;
}
void display(struct node *start)
{
    struct node *temp=start;
    if(start==NULL)
    printf("Empty List");
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            printf("->");
            temp=temp->next;
        }
        printf("NULL");
    }
}
void insbeg(struct node *start,int d)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=d;
    new_node->prev=NULL;
    new_node->next=start;
    start->prev=new_node;
    start=new_node;
    display(start);
}

void insend(struct node *start,int d)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    struct node *temp=start;
    new_node->data=d;
    new_node->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->prev=temp;
    display(start);
}

void inspos(struct node *start,int d,int pos)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    struct node *temp=start;
    new_node->data=d;
    for(int i=1;i!=pos-1;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    new_node->prev=temp;
    temp->next=new_node;
    display(start);
}

void insval(struct node *start,int d,int val)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    struct node *temp=start;
    new_node->data=d;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    new_node->prev=temp;
    temp->next=new_node;
    display(start);
}

int main()
{
    int ch,d,pos,val;
    struct node *start=NULL,*current=NULL,*new_node,*head;
    head=create(start,current,new_node);
    display(head);
    printf("Enter value to insert-");
    scanf("%d",&d);
    printf("Insertion Menu\n1.Insert at beginning\n2.Insert at last\n3.Insert at given pos\n4.Insert at after value\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        insbeg(head,d);
        break;
    case 2:
        insend(head,d);
        break;
    case 3:
        printf("\nEnter position you want to insert-");
        scanf("%d",&pos);
        inspos(head,d,pos);
        break;
    case 4:
        printf("\nEnter value after which you want to insert-");
        scanf("%d",&val);
        insval(head,d,val);
        break;
    default:
        break;
    }
}