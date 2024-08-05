#include <stdio.h>
int main()
{
    int arr[10],i,n,ch,pos,val;
    printf("Enter no of elements in array-");
    scanf("%d",&n);
    printf("Enter elements one by one-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array Before Deletion-");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nChoices\nEnter 1 to delete element at the beginning\nEnter 2 to delete from end\nEnter 3 to delete at given position\nEnter 4 to delete after particular element\n");
    printf("Enter choice-");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n-=1;
        break;
        case 2:
        n-=1;
        break;
        case 3:
        printf("Enter the position you want to delete from-");
        scanf("%d",&pos);
        for(i=pos;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        n-=1;
        break;
        case 4:
        printf("Enter value you want to delete-");
        scanf("%d",&val);
        for(i=0;i<n;i++)
        {
            if(arr[i]==val)
            {
                for(int j=i;i<n-1;i++)
                {
                    arr[j]=arr[j+1];
                }
                n-=1;
            }
        }
    }
    printf("\nArray After Deletion-");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }   
}