#include <stdio.h>
int main(){
    int vini;
    /* int a[100],dim,i,j,sum=0;
    printf("\nEnter any dimension ");
    scanf("%d",&dim);
    for(i=0;i<dim;i++)
    {
        printf("\nEnter element at a[%d] ",i);
        scanf("%d",&a[i]);
        //sum+=a[i];
    } */
    /* printf("Sum of elements - %d",sum);
    for(int i=0;i<dim;i++)
    {
        printf("\na[%d] = %d  address = %d",i,a[i],&a[i]);
    } */
    /* int pos, max=a[0];
    for(int i=0;i<dim;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            pos=i;
        }
    }
    printf("\nMaximum element in array is %d at position %d",max,pos+1); */

    //searching
    //linear
    /* int key,pos,flag=0;
    printf("\nEnter element to be searched-");
    scanf("%d",&key);
    for(int i=0;i<dim;i++)
    {
        if(key==a[i]){
            flag=1;
            pos=i;
            break;
        }
    }
    if (flag==1)
    printf("\n%d is present at %d position",key,pos+1);
    else 
    printf("\n%d not present in array",key); */

    //non zero elemet
    /* int temp[100];
    int k=0;
    for(i=0;i<dim;i++)
    {
        if(a[i]>0)
        {
            temp[k]=a[i];
            k++;
        }
    }
    printf("\nNon-zero array:");
    for(i=0;i<k;i++)
    {
        printf("%d ",temp[i]);
    } */
    
    //Binary search
    /* int start=0,end=dim-1,key,mid,flag=0,pos;
    printf("\nEnter element to be searched-");
    scanf("%d",&key);

    while(start<end)
    {
        mid=(start+end)/2;
        if(key==a[mid]){
            pos=mid;
            flag=1;
            break;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else if(key>a[mid]){
            start=mid+1;
        }
    }
    if (flag==1)
    printf("\n%d is present at %d position",key,pos+1);
    else 
    printf("\n%d not present in array",key); */


    //reverse
    /* i=0;
    j=dim-1;
    int temp;
    while(i<j) 
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("\nReverse of array: ");
    for(int i=0;i<dim;i++)
    {
        printf(" %d ",a[i]);
    }
     */


    //sorting
    //selection sort
    /* int temp;
    for(int i=0;i<dim;i++)
    {
        for(int j=i+1;j<dim;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //Bubble sort
    for(int i=0;i<dim;i++)
    {
        for(j=0;j<dim-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //Insertion sort
    for(int i=1;i<dim;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }

    printf("Array after sorting:");
    for(int i=0;i<dim;i++)
    {
        printf(" %d ",a[i]);
    } */
    
    //enter element
    /* int a[10][10],i,j,r,c;
    printf("Enter no of rows and column-");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element at a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    } */

    //transpose
    //same matrix
    /* for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
            {
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } */

    //lower triangle
    /* for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
            {
                a[i][j]=0;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } */

    //matrix multipliactaion
    /* int a[10][10],b[10][10],res[10][10],i,j,k,r1,c1,r2,c2;
}