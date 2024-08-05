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
            current=new_node;
            start=new_node;
        }
        else{
            current->next=new_node;
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
    {
        printf("Linked List is empty");
    }
    else
    {

        while(temp!=NULL)
        {
            printf("%d",temp->data);
            printf("->");
            temp=temp->next;
        }
    }
    printf("NULL");
}

void delbeg(struct node * start)
{
    struct node *temp=start;
    start=start->next;
    free(temp);
    display(start);
}

void delend(struct node * start)
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

void delpos(struct node *start,int pos)
{
    struct node *temp=start,*del;
    for(int i=1;i!=pos-1;i++)
    {
        temp=temp->next;
    }
    del=temp->next;
    temp->next=del->next;
    free(del);
    display(start);
}

void delval(struct node *start,int val)
{
    struct node *temp=start,*del;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    del=temp->next;
    temp->next=del->next;
    free(del);
    display(start);
}

int main()
{
    int ch,val,pos;
    struct node *start=NULL,*current=NULL,*new_node,*head;
    head=create(start,current,new_node);
    display(head);
    printf("Deletion Menu\n1.To Delete first element\n2.To Delete Last element\n3.Delete value of given position\n4.To Delete given position\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        delbeg(head);
        break;
    case 2:
        delend(head);
        break;
    case 3:
        printf("Enter the position of element-");
        scanf("%d",&pos);
        delpos(head,pos);
        break;
    case 4:
        printf("Enter the value to delete-");
        scanf("%d",&val);
        delval(head,val);
        break;
    default:
        printf("Invalid choice");
        break;
    }
}