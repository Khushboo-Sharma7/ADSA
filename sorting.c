#include <stdio.h>

int main()
{
    int a[6],ch,n;
    printf("Enter no of elements-");
    scanf("%d",&n);
    printf("Enter elements-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //display
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
    //selection sort
    int i,j,temp;
    /*for (i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }*/

    //insertion sort
    int p;
    /*for(i=1;i<n;i++)
    {
        p=i-1;
        temp=a[i];
        while(p>=0 && temp<a[p])
        {
            a[p+1]=a[p];
            p=p-1;
        }
        a[p+1]=temp;
    }*/


    //bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    //display
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
}