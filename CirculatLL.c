#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
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
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
            new_node->next=new_node;
        }
        else{
            current->next=new_node;
            current=new_node;
            new_node->next=start;
        }
        printf("Do you want to continue-");
        scanf("%d",&c);
    } while (c==1);
    return start;
}

void display(struct node *start)
{
    struct node *temp=start;
    if(start==NULL)
    printf("Linked List is empty\n");
    
    else
    {
        do
        {
            printf("%d",temp->data);
            printf("->");
            temp=temp->next;
        } while (temp!=start);
        
    }
}
void insbeg(struct node *start,int d)
{
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=d;
    new_node->next=start;
    start=new_node;
    display(start);
}
void insend(struct node *start,int d)
{
    struct node *temp=start;
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=d;
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=start;
    display(start);
}
void inspos(struct node *start,int d,int pos)
{
    struct node *temp=start;
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=d;
    for(int i=1;i!=pos-1;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    display(start);
}
void insval(struct node *start,int d,int val)
{
    struct node *temp=start;
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=d;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    display(start);
}
int main()
{
    int ch,d,pos,val;
    struct node *start=NULL,*current=NULL,*new_node,*head;
    head=create(start,current,new_node);
    display(head);
    printf("\nEnter data to insert-");
    scanf("%d",&d);
    printf("\nInsertion Menu\n1.Insert at beginning\n2.Insert at end\n3.Insert at given position\n4.After given value\n");
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
        printf("Enter postion to insert at-");
        scanf("%d",&pos);
        inspos(head,d,pos);
        break;
    case 4:
        printf("Enter element after which to insert-");
        scanf("%d",&val);
        insval(head,d,val);
        break;
    default:
        printf("Invalid Choice");
        break;
    }
}