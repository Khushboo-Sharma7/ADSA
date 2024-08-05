#include <stdio.h>
void push(int arr[5],int top,int maxstk)
{
    int d,i;
    printf("Enter data-");
    scanf("%d",&d);
    
    if(top==maxstk)
    {
        printf("Overflow\n");
    }
    else
    {
        top+=1;
        arr[top]=d;
    }
    
    for(i=0;i<=top;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}
void pop(int arr[5],int top,int maxstk)
{
    if(top==-1)
    printf("Underflow\n");
    else{
        for(int i=0;i<top;i++)
        {
            arr[i]=arr[i+1];
        }
        top--;
    }
    for(int i=0;i<=top;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}

int main()
{
    int arr[5],n,i,ch;
    printf("Enter no of elements-");
    scanf("%d",&n);
    int top=n-1,maxstk=4;
    printf("Enter elements-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nMENU\n1.PUSH\n2.POP\n");
    printf("Enter choice-");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        push(arr,top,maxstk);
        break;
    case 2:
        pop(arr,top,maxstk);
        break;
    default:
    printf("invalid choice");
        break;
    }
}