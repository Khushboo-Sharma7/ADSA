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
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else{
            current->next=new_node;
            current=new_node;
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
    {
        printf("Empty stack");
    }
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
void push(struct node *start,int d)
{
    struct node *temp=start;
    struct node * new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=d;
    new_node->next=NULL;
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    display(start);
}
void pop(struct node * start)
{
    struct node *ex,*temp=start;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    ex=temp->next;
    temp->next=NULL;
    free(ex);
    display(start);
}
int main()
{
    int ch,d;
    struct node *start=NULL,*current=NULL,*new_node,*head;
    head=create(start,current,new_node);
    display(head);
    printf("\nInsertion Menu\n1.PUSH\n2.POP\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\nEnter data to insert-");
        scanf("%d",&d);
        push(head,d);
        break;
    case 2:
        pop(head);
        break;
    default:
        printf("Invalid Innput");
        break;
    }

}