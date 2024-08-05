#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *new_node,*start=NULL,*current,*temp;
    int ch;
    do
    {
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data-");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
        printf("Do you want to continue(1/0)?-");
        scanf("%d",&ch);
    } 
    while (ch==1 );
    temp=start;
    if(start==NULL)
    printf("Linked List is empty");
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
    return 0;
}