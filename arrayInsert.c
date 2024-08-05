#include <stdio.h>

int main()
{
    int n,i,ch,ele,pos,arr[20];
    printf("Enter no of elements in array-");
    scanf("%d",&n);
    printf("Enter elements one by one-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array before insertion-");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nChoices\nEnter 1 to insert element at the beginning of array\nEnter 2 to insert at end\nEnter 3 to insert at given position\n");
    scanf("%d",&ch);
    printf("Enter element to be inserted-");
    scanf("%d",&ele);
    switch(ch)
    {
        case 1:
        for(i=n;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=ele;
        break;
        case 2:
        arr[n]=ele;
        break;
        case 3:
        printf("Enter the index you want to insert-");
        scanf("%d",&pos);
        for(i=n;i>pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=ele;
        break;
        default:
        printf("Invalid choice");
    }
    printf("Array after insertion-");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}