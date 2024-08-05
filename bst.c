#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int info;
    struct node *right;
};
typedef struct node *bstnode;
bstnode findmax(bstnode t)
{
    while(t->right!=NULL)
    {
        t=t->right;
    }
    return t;
}
bstnode insert(bstnode t,int x)
{
    if (t==NULL)
    {
        t=(bstnode)malloc(sizeof(struct node));
        if(t==NULL)
        {
            printf("Overflow");
            exit;
        }
        else
        {
            t->info=x;
            t->left=t->right=NULL;
        }
    }
    else
    {
        if(x<t->info)
        t->left=insert(t->left,x);
        else
        {
            if(x>t->info)
            t->right=insert(t->right,x);
        }
    }
    return t;
}
bstnode delete(bstnode t,int x)
{
    bstnode temp;
    if(t==NULL)
    printf("Empty");
    else
    {
        if(x<t->info)
        t->left=delete(t->left,x);
        else
        {
            if(x>t->info)
            t->right=delete(t->right,x);
            else
            {
                if(t->left && t->right)
                {
                    temp=findmax(t->left);
                    t->info=temp->info;
                    t->left=delete(t->left,t->info);
                }
                else
                {
                    temp=t;
                    if(t->left==NULL)
                    t=t->right;
                    else
                    {
                        if(t->right==NULL)
                        t=t->left;
                        free(temp);
                    }
                }
            }
        }
    }
    return t;
}
void display(bstnode start)
{
    if(start!=NULL)
    {
        display(start->left);
        printf("%d ",start->info);
        display(start->right);
    }
}
int main()
{
    int i,n,val,ch,v;
    bstnode start=NULL;
    printf("Enter no of elements-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("ENter value-");
        scanf("%d",&val);
        start=insert(start,val);
    }
    printf("\nInorder traversal of bst-");
    display(start);
    printf("\nBinary search tree\n1.Insert\n2.Delete\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter valude to be inserted-");
        scanf("%d",&v);
        insert(start,v);
        display(start);
        break;
    case 2:
        printf("Enter valude to be deleted-");
        scanf("%d",&v);
        delete(start,v);
        display(start);
        break;
    default:
        printf("Invalid input");
        break;
    }
}